targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile: 
	$(CC) $(C_OPTS) task02_5/src/main.c -o dist/main02_5.bin
	$(CC) $(C_OPTS) task02_6/src/main.c -o dist/main02_6.bin

run: clean prep compile
	./dist/main.bin
	
format: #TODO

tidy: # TODO

