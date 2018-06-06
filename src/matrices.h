
#include<stdio.h>

int lee_filas(void){

  int m;
  scanf("%d",&m);
  return m;
}

int lee_columnas(void){
  int n;
  scanf("%d",&n);
  return n;
}

void inicializa_mat(int nums[][10],int m,int n){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

      nums[i][j]=0;
    }
  }
}

void llena_mat(int nums[][10],int m, int n){

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("Ingresa valor [%d][%d]:\n",i,j);
      scanf("%d",&nums[i][j]);
    }
  }
}

void imp_mat(int nums[][10],int m, int n){

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("[%d]\t",nums[i][j]);
    }
    printf("\n");
  }
}

void trans(int nums[][10],int trans[][10],int m, int n){

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

      trans[j][i]=nums[i][j];
    }
  }
}



void suma_mat(int a[][10],int b[][10],int c[][10],int n,int m){

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

      c[i][j]= a[i][j]+b[i][j];
    }
  }
}

void resta_mat(int a[][10],int b[][10],int c[][10],int n,int m){

  for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){

      c[i][j]= a[i][j]-b[i][j];
    }
  }
}

void mult_mat(int a[][10],int b[][10],int c[][10],int n,int m){

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

      for(int k=0;k<n;k++){

        c[i][j]+= a[i][k] * b[k][j];
      }
    }
  }
}
