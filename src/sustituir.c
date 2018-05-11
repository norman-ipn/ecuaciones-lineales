float
sustituir (int n)
{
  int i = 0, j = 0;
  float A[n][n], sum = 0.0, x[n];
  x[n] = A[n][n + 1] / A[n][n];
  for (i = n - 1; i >= 1; i--)
    {
      sum = 0;
      for (j = i + 1; j <= n; j++)
	{
	  sum = sum + A[i][j] * x[j];
	}
      x[i] = (A[i][n + 1] - sum) / A[i][i];
    }
}
