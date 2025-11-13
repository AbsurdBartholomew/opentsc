PROJECT_NAME = Urbz
APP_NAME = The Urbz: Sims in the City

SOURCE_ROOT = src
GAME_FOLDER = $(SOURCE_ROOT)/games/urbz
SOURCES +=  $(wildcard $(SOURCE_ROOT)/apt/*.cpp) $(wildcard $(GAME_FOLDER)/*/*.cpp)

OUT_DIR := $(GAME_FOLDER)/obj/
BIN_DIR := $(GAME_FOLDER)/bin
BIN_NAME := $(PROJECT_NAME).exe

WIN_RES := Urbz.res

include opentsc.mak