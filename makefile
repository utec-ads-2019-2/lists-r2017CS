# Sources
#		https://www.partow.net/programming/makefile/index.html
#			Makefiles examples for big projects
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
INCLUDE := -iquote src/lists/

