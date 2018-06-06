#include<stdio.h>
#include"aritfracs.h"
#include"matrices.h"

void espacio(void);
void llena_matfracs(fraccion mat[][10],int filas,int columnas);
void imp_matfracs(fraccion mat[][10],int filas,int columnas);
fraccion trans_afrac(int numero);
fraccion trans_inversa(int numero);
fraccion div_pivote(int enteros[][10]);
void transforma_mat(int enteros[][10],fraccion mat[][10],int filas,int columnas);
void haz_pivote(fraccion mat[],fraccion divisor,int columnas);

int main(void){
fraccion mat[10][10]; fraccion aux;
int enteros[10][10],filas,columnas;

do{
  printf("Numero de incognitas:\n");
  columnas = lee_columnas();
  printf("Numero de ecuaciones:\n");
  filas = lee_filas();

}while(filas >10 || columnas >10);
columnas = columnas+1;
llena_mat(enteros,filas,columnas);
transforma_mat(enteros,mat,filas,columnas);
aux = div_pivote(enteros);
haz_pivote(mat[0],aux,columnas);
imp_matfracs(mat,filas,columnas);
return 0;
}
void espacio(void){
  int i;
  for(i=0;i<2;i++){
    printf("\n");
  }
}
int pide_filas(void){
  int m;
  scanf("%d",&m);
  return m;
}
int pide_columnas(void){
  int n;
  scanf("%d",&n);
  return n;
}
void imp_matfracs(fraccion mat[][10],int filas,int columnas){
  int i,j;
      for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
          imp_fraccion(mat[i][j]);
        }
        printf("\n");
      }
}
fraccion trans_afrac(int numero){
  fraccion aux;
           aux.n = numero;
           aux.d = 1;
  return aux;

}

fraccion trans_inversa(int numero){
  fraccion aux;
           aux.n = 1;
           aux.d = numero;

  return aux;
}

fraccion div_pivote(int enteros[][10]){
  fraccion divisor;
  if(enteros[0][0]!= 1){

    divisor = trans_inversa(enteros[0][0]);

  }

  return divisor;

}

void transforma_mat(int enteros[][10],fraccion mat[][10],int filas,int columnas){
  int i,j;
      for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
          mat[i][j] = trans_afrac(enteros[i][j]);
        }
      }
}

void haz_pivote(fraccion mat[],fraccion divisor,int columnas){
  int i;
    for(i=0;i<columnas;i++){
    mat[i] = multiplica_fracs(mat[i],divisor);
  }

}
