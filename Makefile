CC = gcc
FLAGS = O3
FILES = src/*.c
TGT = *.o

all:
	$(CC) -$(FLAGS) $(FILES)

check:
	$(CC) -fsyntax-only $(FILES)

clearc: clr check

clean:
	rm -f $(TGT)

clr:
	clear

clear: clr all

