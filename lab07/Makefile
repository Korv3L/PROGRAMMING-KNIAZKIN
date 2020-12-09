targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) task01_5/src/main.c -o dist/main01_5.bin
	$(CC) $(C_OPTS) task02_5/src/main.c -o dist/main02_5.bin
	$(CC) $(C_OPTS) task03_5/src/main.c -o dist/main03_5.bin
	$(CC) $(C_OPTS) task05_5/src/main.c -o dist/main05_5.bin
	$(CC) $(C_OPTS) task01_6/src/main.c -o dist/main01_6.bin
	$(CC) $(C_OPTS) task02_6/src/main.c -o dist/main02_6.bin
	$(CC) $(C_OPTS) task03_6/src/main.c -o dist/main03_6.bin
	$(CC) $(C_OPTS) task04_6/src/main.c -o dist/main04_6.bin
	$(CC) $(C_OPTS) task05_6/src/main.c -o dist/main05_6.bin

run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

