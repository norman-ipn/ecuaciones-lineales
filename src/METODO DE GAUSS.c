#include<stdio.h>
#define TAM 100

 //Pedir N
 //prototipo
int datos ();

int pedirn ()
{
  int i, j;
  int n;
  n = datos ();
  int MAT[TAM][TAM];
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  MAT[i][j] = 0;	//Asigna valor a la matriz
	}
    }
  return 0;
}

int
datos ()
{				/* funcion para que pida tamaño de la matriz */
  int i;
  int f;
  printf
    ("Introduzca el numero de variables que incluira la matriz (Introduzca un numero menor a 100):\n");
  scanf ("%i", &i);		/*introducimos el tamaño de la matriz */
  while (i > TAM && i > 0)
    {
      printf ("El valor excede a 100, introduzca uno menor\n");
      scanf ("%i", &i);
    }
  return i;
}
