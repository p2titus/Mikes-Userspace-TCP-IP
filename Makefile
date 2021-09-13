CC = gcc
FLAGS = O3
FILES = src/*.c
TGT = *.o

all:
	$(CC) -$(FLAGS) $(FILES)

clean:
	rm -f $(TGT)

clr:
	clear

clear: clr all

