#include <stdio.h>

int prime (int n);

void
main ()
{
  int n, res;
  printf ("Enter the number:\n");
  scanf ("%d", &n);
  res = prime (n);
  if (res == 1)
    printf ("Number is composite\n");
  else
    printf ("Number is prime\n");
}

int
prime (int n)
{
  int i;
  for (i = 2; i < n / 2; i++)
    {
      if (n % i == 0)
	{
	  return 1;
	}
    }
  return 0;
}
