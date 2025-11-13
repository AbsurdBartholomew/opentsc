PROJECT_NAME = Sims2Castaway
APP_NAME = The Sims 2 Castaway

SOURCE_ROOT = src
GAME_FOLDER = $(SOURCE_ROOT)/games/sims2castaway
SOURCES +=  $(wildcard $(SOURCE_ROOT)/apt/*.cpp) $(wildcard $(GAME_FOLDER)/*/*.cpp)

OUT_DIR := $(GAME_FOLDER)/obj/
BIN_DIR := $(GAME_FOLDER)/bin
BIN_NAME := $(PROJECT_NAME).exe

WIN_RES := Sims2castaway.res

include opentsc.mak