#include <stdio.h>

void
main ()
{
  int a, b, rem;
  printf ("Enter the value of a and b:\n");
  scanf ("%d %d", &a, &b);
  while (b != 0)
    {
      rem = a % b;
      a = b;
      b = rem;
    }
  printf ("Greatest common devisor is %d\n", a);
}
