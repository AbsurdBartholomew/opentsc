PROJECT_NAME = Sims3
APP_NAME = The Sims 3

SOURCE_ROOT = src
GAME_FOLDER = $(SOURCE_ROOT)/games/sims3
SOURCES +=  $(wildcard $(SOURCE_ROOT)/apt/*.cpp) $(wildcard $(GAME_FOLDER)/*/*.cpp)

OUT_DIR := $(GAME_FOLDER)/obj/
BIN_DIR := $(GAME_FOLDER)/bin
BIN_NAME := $(PROJECT_NAME).exe

WIN_RES := Sims3.res

include opentsc.mak