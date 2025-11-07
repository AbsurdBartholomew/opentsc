PROJECT_NAME = opentsc

SOURCE_ROOT = src
SOURCES += $(wildcard $(SOURCE_ROOT)/*.cpp) \
			$(wildcard $(SOURCE_ROOT)/engine/*.cpp) \
			$(wildcard $(SOURCE_ROOT)/common/*.cpp) \
			$(wildcard $(SOURCE_ROOT)/games/sims/*/*.cpp)

OUT_DIR := out/
BIN_DIR := bin
BIN_NAME := $(PROJECT_NAME).exe
LIB_DIR := lib
LIBRARIES := -lmingw32 -lgdi32 -lSDL2main -lSDL2 -lSDL2_mixer -lOpengl32 -lglu32
OPTIMIZATION := -O0

# Compiler Stuff
CPPFLAGS := -I$(SOURCE_ROOT) -MMD -MP
CFLAGS   := -Wall
LDFLAGS  := -L$(LIB_DIR) -static-libgcc

# Targets
BIN := $(BIN_DIR)/$(BIN_NAME)
OBJS := $(SOURCES:%.cpp=$(OUT_DIR)/%.o)

.PHONY: all clean
all: $(BIN)
clean:
	@if exist $(BIN_DIR) $(RMDIR) $(BIN_DIR)
	@if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)

############ Program Compilation ############
$(BIN): $(OBJS) | $(BIN_DIR)
	$(CXX) $(LDFLAGS) $^ $(LIBRARIES) -o $@

$(OUT_DIR)/%.o: ./%.cpp | $(OUT_DIR)
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) $(CFLAGS) -g -c $< -o $@

$(BIN_DIR) $(OUT_DIR):
	@mkdir -p $(BIN_DIR)


-include $(OBJ:.o=.d)