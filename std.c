#include <stdio.h>
#include <math.h>

void
main ()
{
  float sum = 0.0, mean, sumstd = 0.0, std;
  int a[20], n, i;
  int *ptr;
  printf ("Enter no of elements in an array\n");
  scanf ("%d", &n);
  printf ("Enter array elements:\n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  ptr = a;
  for (i = 0; i < n; i++)
    {
      sum = sum + *ptr;
      ptr++;
    }
  mean = sum / n;
  ptr = a;
  for (i = 0; i < n; i++)
    {
      sumstd = sumstd + pow ((mean - *ptr), 2);
      ptr++;
    }
  std = sqrt (sumstd / n);
  printf ("Sum of all the elements in an array: %f\n", sum);
  printf ("Average of all the elements in an array: %f\n", mean);
  printf ("STandard Deviation of the elements in an array: %f\n", std);
}
