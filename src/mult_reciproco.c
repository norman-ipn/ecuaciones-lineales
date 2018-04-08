#include <stdio.h>
/*  r es el valor que ayuda a obtener el recíproco del número con el que es trabajará.
	n es la matriz.
	N es el entero que recibe para multiplicar por el recíproco.
	
*/

void mult_reciproco(float n[0][10], int N)

int main(void){
	return 0;
}

void mult_reciproco(float n[0][10], int N){
	float r=0,d=0;		
	int i=0,j;			
	for(j=0;j<=N;j++){	//
		if(n[i][j]!=1){
			r=n[i][j];
			d=j;
			break;
		}
	}
	r=(1/r);
	for(j=d;j<=N;j++){
		n[i][j]*=r;
	}
}
