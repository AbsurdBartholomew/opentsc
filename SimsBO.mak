PROJECT_NAME = Sims
APP_NAME = The Sims: Bustin' Out

SOURCE_ROOT = src
GAME_FOLDER = $(SOURCE_ROOT)/games/simsbo
SOURCES +=  $(wildcard $(SOURCE_ROOT)/apt/*.cpp) $(wildcard $(GAME_FOLDER)/*/*.cpp)

OUT_DIR := $(GAME_FOLDER)/obj/
BIN_DIR := $(GAME_FOLDER)/bin
BIN_NAME := $(PROJECT_NAME).exe

WIN_RES := SimsBO.res

include opentsc.mak