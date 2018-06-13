main.o: main.c
	gcc -c main.c -Wall

pedirn.o: pedirn.c
	gcc -c pedirn.c -Wall

funcion_pedir_valores.o: funcion_pedir_valores.c
	gcc -c funcion_pedir_valores.c -Wall
 
reciproco.o: reciproco.c
	gcc -c reciproco.c -Wall

restar.o: restar.c
	gcc -c restar.c -Wall

sustituir.o: sustituir.c
	gcc -c sustituir.c -Wall

a.out: main.o pedirn.o funcion_pedir_valores.o reciproco.o restar.o sustituir.o
	gcc main.o pedirn.o funcion_pedir_valores.o reciproco.o restar.o sustituir.o 

clear: 
	rm a.out main.o pedirn.o funcion_pedir_valores.o reciproco.o restar.o sustituir.o 

run: a.out
	./a.out
