#include <stdio.h>

int pedirvalores(void){ 

float A, B;
float matriz [A][B];

int fil=0;

int col=0;



for (fil=0; fil<A; fil++){

	for(col=0; col<B; col++){

		printf("Ingrese el coeficiente del lugar matriz[%d][%d]\t", fil+1, col+1);

		scanf("%f",&matriz[fil][col]);}}

	}

}

return 0;

}
