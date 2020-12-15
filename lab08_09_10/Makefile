targets = main.bin format
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wreturn-type -Wuninitialized -Wmaybe-uninitialized -Wlogical-not-parentheses -Wno-unused-variable -Wnull-dereference  

all: clean prep doxygen compile run

clean:
	rm -rf dist
prep:
	mkdir dist
doxygen:
	doxygen -g DoxyFile
compile: 
	$(CC) $(C_OPTS) task02_5/src/main.c -o dist/main02_5.bin
	$(CC) $(C_OPTS) task02_6/src/main.c -o dist/main02_6.bin

run: clean prep doxygen compile
	./dist/main.bin
	
format: #TODO

tidy: # TODO
