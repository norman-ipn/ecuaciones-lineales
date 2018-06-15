void
restar (float m[10][11], int i, int j, int g, int n)
{

  float t[11];
  int c = 0;
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
