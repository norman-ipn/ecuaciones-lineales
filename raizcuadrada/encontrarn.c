#include<stdio.h>
int
encontrarn (int r)
{
  int N = 0;
  if (r < 0)
    {
      printf ("Ingrese un numero valido.\n");
    }
  else if (r == 0)
    {
      printf ("Su raiz cuadrada es: 0\n");
    }
  else if (r == 1)
    {
      printf ("Su raiz cuadrada es: 1\n");
    }
  else if (r > 1 && r <= 9)
    {
      N = 1;
    }
  else if (r > 9 && r <= 99)
    {
      N = 2;
    }
  else if (r > 99 && r <= 999)
    {
      N = 3;
    }
  else if (r > 999 && r <= 9999)
    {
      N = 4;
    }
  else if (r > 9999 && r <= 99999)
    {
      N = 5;
    }
  else if (r > 99999 && r <= 999999)
    {
      N = 6;
    }
  else if (r > 999999 && r <= 9999999)
    {
      N = 7;
    }
  else if (r > 9999999 && r <= 99999999)
    {
      N = 8;
    }
  else if (r > 99999999 && r <= 999999999)
    {
      N = 9;
    }
  else if (r > 999999999 && r < 2147483648)
    {
      N = 10;
    }
  return N;
}
