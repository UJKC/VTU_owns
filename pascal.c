#include <stdio.h>

void fact (int n);

void
main ()
{
  int n, i, j, k, c;
  printf ("Enter no of rows:\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      c = 1;
      for (k = 0; k < n - i; k++)
	{
	  printf (" ");
	}
      for (j = 0; j <= i; j++)
	{
	  printf ("%d", c);
	  printf (" ");
	  c = (c * (i + j)) / (j + 1);
	}
      printf ("\n");
    }
}
