#include<stdio.h>

void multrecip (float n[0][10], int);

int main (void){
  int N = 0, j = 0, i = 0;
  float e[0][10];
  printf ("Cuantas variables tiene la ecuacion: ");
  scanf ("%d", &N);
  printf ("\n");
  for (j = 0; j <= N; j++){
      if (j != N)
	{
	  printf ("Introduce el valor de la %d variable: ", j + 1);
	  scanf ("%f", &e[i][j]);
	}
      else
	{
	  printf ("Introduce el valor del coeficiente independiente: ");
	  scanf ("%f", &e[i][j]);
	}
    }
  multrecip (e, N);
  printf ("La ecuacion multiplicada es: ");
  for (j = 0; j <= N; j++){
      printf ("%.2f ", e[i][j]);
    }
  return 0;
}

void
multrecip (float n[0][10], int N){
  float r = 0, d = 0;
  int i = 0, j;
  for (j = 0; j < N; j++){
      if (n[i][j] != 1)
	{
	  r = n[i][j];
	  d = j;
	  break;
	}
    }
  r = (1 / r);
  for (j = d; j <= N; j++)
    {
      n[i][j] *= r;
    }
}
