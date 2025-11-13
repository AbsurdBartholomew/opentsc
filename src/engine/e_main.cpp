/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#include "e_main.h"

#include <stdio.h>
#include <SDL2/SDL_opengl.h>
#include <time.h>

#include "engine/e_app.h"
#include "engine/sdl/e_sdlengine.h"

#include "common/sync/sdl/e_thread.h"
#include "common/util/e_globalmanager.h"

#include "games/sims/ESRC/appmain.h"

SDL_Window* win = NULL;
static SDL_GLContext context;
static SDL_Event ev;
SDL_Surface* surface = NULL;
static int shouldClose = 0;

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 448

bool SystemStart();

EThread _idleThread;

int main(int argc, char* argv[])
{
    SystemStart();
    EGlobalManager::Startup();
    _pApp->SetArgs(argc, argv);
    _idleThread.AttachToCallingThread();
    _idleThread.SetThreadName("Idle");
    
    _pApp->CreateAndStartAppThread();
    _idleThread.SetPriority(100);

    //_pEngine->ManagedShutdown();


    while(!shouldClose)
    {
        SDL_PollEvent(&ev);

        //User requests quit
        if(ev.type == SDL_QUIT)
        {
            shouldClose = 1;
        }
    }

    return 0;
}

bool SystemStart()
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS | SDL_INIT_JOYSTICK);

    SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 1 );
    SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 1 );

    srand(time(0));

    win = SDL_CreateWindow(APP_NAME, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

    if(win == NULL)
    {
        printf("Could not create window: %s\n", SDL_GetError());
        exit(0);
    }

    surface = SDL_GetWindowSurface(win);

    context = SDL_GL_CreateContext(win);
    SDL_GL_SetSwapInterval(1);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glViewport(0, 0, (GLint)SCREEN_WIDTH, (GLint)SCREEN_HEIGHT);

    return true;
}