// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_MAIN_H
#define C__EOR_SRC2_ENGINE_E_MAIN_H

extern EThread _idleThread;

int main(int argc, char **argv);
int InitHeap();
void global constructors keyed to _idleThread();
void global destructors keyed to _idleThread();

#endif // C__EOR_SRC2_ENGINE_E_MAIN_H
