#include <stdio.h>
#include <math.h>

main ()
{
  float a, b, c, root1, root2, real, imag, dis;
  printf ("Enter the value of a, b, c:\n");
  scanf ("%f %f %f", &a, &b, &c);
  if (a == 0)
    printf ("Not quadratic, Linear\n");
  else
    {
      dis = (b * b) - (4 * a * c);
      if (dis > 0)
	{
	  printf ("The roots are real and unique\n");
	  root1 = (-b + sqrt ((b * b) - (4 * a * c))) / (2 * a);
	  root2 = (-b - sqrt ((b * b) - (4 * a * c))) / (2 * a);
	  printf ("The root1 of the quadratic equation is %f\n", root1);
	  printf ("The root2 of the quadratic equation is %f\n", root2);
	}
      if (dis < 0)
	{
	  printf ("The roots are imaginary and complex\n");
	  real = (-b) / (2 * a);
	  imag = sqrt (fabs (b * b) - (4 * a * c)) / (2 * a);
	  printf ("The root1 of the quadratic equation is %f + i%f\n", real,
		  imag);
	  printf ("The root2 of the quadratic equation is %f - i%f\n", real,
		  imag);
	}
      else
	{
	  printf ("The roots are real and equal\n");
	  root1 = (-b) / (2 * a);
	  root2 = (-b) / (2 * a);
	  printf ("The root1 of the quadratic equation is %f\n", root1);
	  printf ("The root2 of the quadratic equation is %f\n", root2);
	}
    }
}
