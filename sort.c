#include <stdio.h>

void
main ()
{
  int a[30], n, i, j, term;
  printf ("Enter number of elements:\n");
  scanf ("%d", &n);
  printf ("Enter the array elements:\n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = 0; i < n - 1; i++)
    {
      for (j = 0; j < n - i - 1; j++)
	{
	  if (a[j] > a[j + 1])
	    {
	      term = a[j];
	      a[j] = a[j + 1];
	      a[j + 1] = term;
	    }
	}
    }
  printf ("Elements after sorting:\n");
  for (i = 0; i < n; i++)
    {
      printf ("%d\t", a[i]);
    }

}
