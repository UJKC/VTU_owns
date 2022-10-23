#include <stdio.h>

void
main ()
{
  int a[10][10], b[10][10], c[10][10], i, j, m, n, p, q, k;
  printf ("Enter the dimention of matrix a:\n");
  scanf ("%d %d", &m, &n);
  printf ("Enter the dimention of matrix b:\n");
  scanf ("%d %d", &p, &q);
  if (n == p)
    {
      printf ("Enter the elements of matrix a:\n");
      for (i = 0; i < m; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      scanf ("%d", &a[i][j]);
	    }
	}
      printf ("Enter the elements of matrix b:\n");
      for (i = 0; i < p; i++)
	{
	  for (j = 0; j < q; j++)
	    {
	      scanf ("%d", &b[i][j]);
	    }
	}
      for (i = 0; i < m; i++)
	{
	  for (j = 0; j < q; j++)
	    {
	      c[i][j] = 0;
	      for (k = 0; k < n; k++)
		{
		  c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
	    }
	}
      printf ("Product of two numbers are:\n");
      for (i = 0; i < m; i++)
	{
	  for (j = 0; j < q; j++)
	    {
	      printf ("%d\t", c[i][j]);
	    }
	  printf ("\n\n");
	}

    }
  else
    {
      printf ("Invalid\n");
    }
}
