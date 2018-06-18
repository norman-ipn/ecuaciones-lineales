int
encontrarprimerpar (int N)
{
  int i = 0;
  if (N > 8 && N < 11)
    {
      i = 0;
    }
  else if (N > 6 && N < 9)
    {
      i = 1;
    }
  else if (N > 4 && N < 7)
    {
      i = 2;
    }
  else if (N > 2 && N < 5)
    {
      i = 3;
    }
  else if (N == 1 || N == 2)
    {
      i = 4;
    }
  return i;
}
