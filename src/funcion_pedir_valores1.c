#include <stdio.h>


int main(void){ 
float matriz [4][5]; /*El tama�o de la matriz ya la definen en otra funci�n as� que aqu� usar� una matriz ya definida */
int fil=0;
int col=0;

for (fil=0; fil<4; fil++){ /* necesitamos iteraciones para ir pidiendo los coeficientes y acomodaarlos*/
	for(col=0; col<5; col++){
		printf("Ingrese el coeficiente del lugar matriz[%d][%d]\t", fil+1, col+1); //j+1 e i+1 porque no se puede empezar a contar desde una fila que no existe (pues ambas variables est�n inicializadas en cero)
		scanf("%f",&matriz[fil][col]); //Hay que guardar estas cosas en el lugar que les corresponde
	}
}
for (fil=0; fil<4; fil++){
	for (col=0; col<5; col++){
		printf("%.2f\t", matriz[fil][col]); //Imprimimos nada m�s para saber si sirve :'v
	}
	printf("\n");
}
return 0;
}

	


