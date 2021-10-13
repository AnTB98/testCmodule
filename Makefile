# Makefile for C++ used for testing custom library

CPP=g++
CPFLAGS= -g -Wall
SRC=src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
BINDIR=bin
BIN=$(BINDIR)/runcpp

all: $(BIN)

$(BIN): $(OBJS) 
	$(CPP) $(CPFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CPP) $(CPFLAGS) -c $< -o $@

clean: 
	rm -r $(BINDIR)/* $(OBJ)/*
