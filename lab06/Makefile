targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) task01/src/main.c -o dist/main01.bin
	$(CC) $(C_OPTS) task02/src/main.c -o dist/main02.bin
	$(CC) $(C_OPTS) task03/src/main.c -o dist/main03.bin
	$(CC) $(C_OPTS) task04/src/main.c -o dist/main04.bin
	$(CC) $(C_OPTS) task05/src/main.c -o dist/main05.bin

run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

