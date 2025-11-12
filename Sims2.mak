PROJECT_NAME = Sims2

SOURCE_ROOT = src
GAME_FOLDER = $(SOURCE_ROOT)/games/sims2
SOURCES += $(wildcard $(GAME_FOLDER)/*/*.cpp)

OUT_DIR := $(GAME_FOLDER)/obj/
BIN_DIR := $(GAME_FOLDER)/bin
BIN_NAME := $(PROJECT_NAME).exe

WIN_RES := Sims2.res

include opentsc.mak