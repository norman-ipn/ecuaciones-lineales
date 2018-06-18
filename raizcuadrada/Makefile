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
	
encontrarprimerpar.o: encontrarprimerpar.c
	gcc -c encontrarprimerpar.c -Wall

obtenerprimerraiz.o: obtenerprimerraiz.c
	gcc -c obtenerprimerraiz.c -Wall

hacerbotita.o: hacerbotita.c
	gcc -c hacerbotita.c -Wall

mostrarraiz.o: mostrarraiz.c
	gcc -c mostrarraiz.c -Wall

pedirr.o: pedirr.c
	gcc -c pedirr.c -Wall

a.out: main.o encontrarn.o hacerpares.o recibirnumero.o encontrarprimerpar.o obtenerprimerraiz.o hacerbotita.o concatenar.o mostrarraiz.o pedirr.o
	gcc main.o encontrarn.o hacerpares.o recibirnumero.o encontrarprimerpar.o obtenerprimerraiz.o hacerbotita.o concatenar.o mostrarraiz.o pedirr.o

clean: 
	rm a.out main.o encontrarn.o hacerpares.o recibirnumero.o encontrarprimerpar.o obtenerprimerraiz.o hacerbotita.o concatenar.o mostrarraiz.o pedirr.o

run: a.out
	./a.out
