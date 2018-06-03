main.o: main.c
	gcc -c main.c -Wall
pedir.o: pedir.c
	gcc -c pedir.c -Wall

reciproco.o: reciproco.c
	gcc -c reciproco.c -Wall

a.out: main.o pedir.o
	gcc main.o pedir.o 

clear: 
	rm main.o pedir.o a.out

restar.o: restar.h
	gcc -c restar.c -Wall
	
