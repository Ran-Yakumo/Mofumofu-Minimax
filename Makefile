CC=gcc
CFLAGS=-g -c -Wall
LDFLAGS=-g

all: mofumofu

mofumofu: mofumofu.o
	$(CC) $(LDFLAGS) mofumofu.o -o mofumofu.exe

mofumofu.o: mofumofu.c
	$(CC) $(CFLAGS) mofumofu.c

clean:
	rm -rf *.o mofumofu
