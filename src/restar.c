float
restar (float m[][], int i, int j, int n)
{

  int c = 0;

  for (c = 0; c < n; c++)
    {
      if (m[j][c] == 0)
	{
	  m[j][c] = m[i][c];
	}
      else
	{
	  m[j][c] = m[i][c] - m[j][c];
	  m[j][c]--;
	}
    }

  return m[j][c];
}
