CC=g++

LDFLAGS=-lraylib
OBJFLAGS=-o main.a main.cpp actions/*.cpp actors/*.cpp commons/*.cpp
DEBUGFLAGS=-g -DDEGUG=true

all:
	$(CC) -Wall $(OBJFLAGS) $(LDFLAGS)
debug:
	$(CC) -Wall $(OBJFLAGS) $(LDFLAGS) $(DEBUGFLAGS)

default: all
