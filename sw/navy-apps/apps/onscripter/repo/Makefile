NAME = onscripter
INC_DIR += ./include
BUILD_DIR ?= ./build

OBJ_DIR ?= $(BUILD_DIR)/
BINARY ?= $(BUILD_DIR)/$(NAME)

.DEFAULT_GOAL = app

DEFS  = -DUSE_BUILTIN_EFFECTS -DUSE_BUILTIN_LAYER_EFFECTS
# optional: enable English mode
#DEFS += -DENABLE_1BYTE_CHAR -DFORCE_1BYTE_CHAR

# Compilation flags
CC  = gcc
CXX = g++
LD  = g++
INCLUDES  = $(addprefix -I, $(INC_DIR))
CFLAGS    = -O2 -MMD -Wall $(INCLUDES) `sdl-config --cflags`
CXXFLAGS  = $(CFLAGS)
LDFLAGS   = -O2 `sdl-config --libs` -lSDL_ttf -lSDL_image -lSDL_mixer -lbz2 -lm

# Files to be compiled
CXX_SRCS = $(shell find src/ -name "*.cpp")
OBJS = $(CXX_SRCS:src/%.cpp=$(OBJ_DIR)/%.o) 

# Compilation patterns
$(OBJ_DIR)/%.o: src/%.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c -o $@ $<


# Depencies
-include $(OBJS:.o=.d)

# Some convenient rules

.PHONY: app clean
app: $(BINARY)

$(BINARY): $(OBJS)
	@echo + LD $@
	@$(LD) -o $@ $^ $(LDFLAGS)

run: app
	./$(BINARY) -r ../ons-game/clannad

clean:
	-rm -rf $(BUILD_DIR)
