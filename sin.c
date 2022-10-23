#include <stdio.h>
#include <math.h>

int
main ()
{
  unsigned i = 1;
  double term, sine, x;
  int angled;
  printf ("Enter the angle in degrees:\n");
  scanf ("%d", &angled);
  x = angled * M_PI / 180;
  term = x;
  sine = term;
  while (fabs (term) > 0.00001)
    {
      i = i + 2;
      term = -term * x * x / (i * (i - 1));
      sine = sine + term;
    }
  printf ("By calculation: %d = %lf\n", angled, sine);
  printf ("By built in function: %d = %lf\n", angled, sin (x));
  return 0;
}
