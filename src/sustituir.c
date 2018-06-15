void
sustituir (float m[10][11], float x[10], int n)
{
  int i = 0, j = 0;
  float sum = 0.0;
  x[n - 1] = m[n - 1][n];
  for (i = n - 2; i >= 0; i--)
    {
      sum = 0.0;
      for (j = i + 1; j < n; j++)
	{
	  sum = sum + m[i][j] * x[j];
	}
      x[i] = (m[i][n] - sum);
    }
}
