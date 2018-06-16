main.o: main.c
	gcc -c main.c -Wall

recibirnumero.o: recibirnumero.c
	gcc -c recibirnumero.c -Wall

hacerpares.o: hacerpares.c
	gcc -c hacerpares.c -Wall

encontrarn.o: encontrarn.c
	gcc -c encontrarn.c -Wall 

concatenar.o: concatenar.c
	gcc -c concatenar.c -Wall

a.out: main.o encontrarn.o hacerpares.o recibirnumero.o  
	gcc main.o encontrarn.o hacerpares.o recibirnumero.o   

clean: 
	rm a.out main.o encontrarn.o hacerpares.o recibirnumero.o   

run: a.out
	./a.out
