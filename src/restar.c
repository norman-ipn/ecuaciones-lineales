#include<stdio.h>
void restar(float m[10][10], int i, int j, int n){
	/*
	Donde	m[10][10] es la matriz con sus valores ya asignados.
			i es el numero de fila de la ecuacion que se encuentra multiplicada por el reciproco de su primer coeficiente diferente de cero para ser restada por la ecuacion j.
			j es el numero de fila de la ecuacion que se va a restar con la ecuacion i.
			n es el numero de columnas de la matriz.
	*/
	for(c=0; c<n+1; c++){
		/*c es el numero de columna*/
		if(m[j][c]=0){
			m[j][c]=m[i][c];
		}
		else{
			m[j][c]=m[i][c]-m[j][c];
		}
	}
}
