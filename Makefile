## le fichier makefile va servir d'instruction pour que l'outil make l'utilise pour compiler le code

# variable de compilation
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# CIble principale
all: programme

# compilation de l'exe
programme: main.o utils.o
	$(CC) $(CFLAGS) -o programme main.o utils.o

# compil des fichiers objets 
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c
# clean des fichiers intermédiaires
clean:
	rm-f *.o programme 

#
