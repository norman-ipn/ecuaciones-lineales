void
multrecip (float n[10][11], int N, int i)
{
  float r = 0, d = 0;
  int j;
  for (j = 0; j < N; j++)
    {
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
