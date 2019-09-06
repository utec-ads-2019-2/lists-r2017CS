# Sources
#		https://www.partow.net/programming/makefile/index.html
#			Makefiles examples for big projects
#		https://stackoverflow.com/questions/38220081/what-does-o-d-mean-in-a-makefile
#			What does “$(@:%.o=%.d)” mean in a makefile?
#		https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean/3220288#3220288
#			What do the makefile symbols $@ and $< mean?
#		https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html#Automatic-Variables
#			GNU Make Manual (automatic variables)
#
#	Notes
#		File organization
#			build/app/
#				Executables
#			build/object
#				C++ object files (*.o)
#			src
#				Implementation files (*.cpp)
#			include
#				Header files
#					* *.h: C++ class header files.
#					* *.hpp: C++ class header files
#					* *.hppt: C++ template class implementation files.

# g++ or c++
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++17

# Root directory for build files
BUILD := ./build

# C++ object files (*.o)
OBJ_DIR = $(BUILD)/object

# Executables (*.out)
APP_DIR = $(BUILD)/app

# Name of the executable program (aka executable). Its default extension is '.out'
TARGET := main

# Directories to include during compilation
INCLUDE := -iquote include

# Source files or translation units
SRC := $(wildcard src/*.cpp)

# Object files from files from src
OBJECTS := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: clean build $(APP_DIR)/$(TARGET) exe

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<

$(APP_DIR)/$(TARGET): $(OBJECTS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $(APP_DIR)/$(TARGET) $(OBJECTS)

build:
	mkdir -p $(APP_DIR)

clean:
	rm -rf $(OBJ_DIR)/*
	rm -rf $(APP_DIR)/*

exe:
	./$(APP_DIR)/$(TARGET)
