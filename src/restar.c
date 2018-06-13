void
restar (float m[][], int i, int j, int g, int n)
{

  float t[];
  for (c = g; c < (n + 1); c++)
    {
      t[c] = m[j][g] * m[i][c];
    }
  for (c = g; c < (n + 1); c++)
    {
      if (m[j][c] == 0)
	{
	  m[j][c] = t[c] * (-1);
	}
      else
	{
	  m[j][c] = m[j][c] - t[c];
	}
    }

}
