#include <stdio.h>

main ()
{
  float centi, faren;
  printf ("Enter the value of temperature in centigrade:\n");
  scanf ("%f", &centi);
  faren = (1.8 * centi) + 32;
  printf ("Temperature in farenheit is %f", faren);
}
