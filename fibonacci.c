#include <stdio.h>

void
main ()
{
  int n, p = 0, q = 1, r, i;
  printf ("Enter no of term in fibonacci series:\n");
  scanf ("%d", &n);
  if (n == 1)
    printf ("%d", p);
  else
    {
      printf ("%d\t%d\t", p, q);
      for (i = 3; i <= n; i++)
	{
	  r = p + q;
	  printf ("%d\t", r);
	  p = q;
	  q = r;
	}
    }
}
