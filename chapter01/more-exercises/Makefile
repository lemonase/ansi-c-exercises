CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic

default: all

all: commentrem detab entab fold syntaxc

commentrem:
	$(CC) $(CFLAGS) -o bin/$@ src/commentrem.c

detab:
	$(CC) $(CFLAGS) -o bin/$@ src/detab.c

entab:
	$(CC) $(CFLAGS) -o bin/$@ src/entab.c

fold:
	$(CC) $(CFLAGS) -o bin/$@ src/fold.c

syntaxc:
	$(CC) $(CFLAGS) -o bin/$@ src/syntaxc.c

clean:
	rm bin/*
