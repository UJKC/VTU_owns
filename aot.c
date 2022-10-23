#include <stdio.h>

main ()
{
  float area, base, height;
  printf ("Enter the value of base and height:\n");
  scanf ("%f %f", &base, &height);
  area = 0.5 * base * height;
  printf ("The area of the triangle is %f", area);
}
