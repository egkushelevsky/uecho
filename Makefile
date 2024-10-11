CC = gcc
  
CFLAGS = -g -Wall
  
uecho: uecho.c
	gcc -o uecho uecho.c

.PHONY: clean  
clean:
	rm -f *.o uecho core uecho
