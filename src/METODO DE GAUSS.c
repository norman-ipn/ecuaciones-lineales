#include<stdio.h>
#define TAM 100
 
 //Pedir N
 
int datos (void);
 
main(void)
{
    int i, j;
    int n;
    n = datos();
 
    float MAT[TAM][TAM];
   
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            MAT[i][j] = 0; //Asigna valor a la matriz
        }
    }
 
    return 0;
}
 
int datos (){ /* funcion para que pida tamaño de la matriz */
    int i;
    do{
        printf("Introduzca el numero de variables que incluira la matriz (Introduzca un numero menor a 100):\n");
        scanf("%i", &i);    /*introducimos el tamaño de la matriz*/
        if(i > TAM && i <= 0){
            printf("el tamaño no es valido, intente de nuevo.");
        }else
            break;
    }while(1);  /*Si no es del tamaño adecuado, indicarlo*/
 
    return i;
}
