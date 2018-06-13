main.o: main.c
	gcc -c main.c -Wall

pedir.o: pedir.c
	gcc -c pedir.c -Wall

reciproco.o: reciproco.c
	gcc -c reciproco.c -Wall

restar.o: restar.c
	gcc -c restar.c -Wall

sustituir.o: sustituir.c
	gcc -c sustituir.c -Wall

a.out: main.o pedir.o sustituir.o
	gcc main.o pedir.o sustituir.o

clear: 
	rm main.o pedir.o sustituir.o a.out

run: a.out
	./a.out
