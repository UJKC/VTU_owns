#include <stdio.h>

void main ()
{
  double slab1 = 0.8, slab2 = 0.9, slab3 = 1.0, surcharge = 0.15, billamount=0.0;
  int mincharge = 100, unit;
  char name[20];
  printf ("Enter the name of the customer:\n");
  scanf ("%s", name);
  printf ("No of units consumed:\n");
  scanf ("%d", &unit);
    billamount += mincharge;
  if (unit < 200)
    {
      billamount += unit * slab1;
    }
  else if (unit >= 200 && unit < 300)
    {
      billamount += (200 * slab1) + ((unit - 200) * slab2);
    }
  else
    {
      billamount += (200 * slab1) + (100 * slab2) + ((unit - 300) * slab3);
    }
  if (billamount > 400)
    {
      billamount += billamount * surcharge;
    }
  printf ("Electricity Bill\n");
  printf
    ("\n--------------------------------------------------------------\n");
  printf ("Name of the customer: %s\n", name);
  printf ("No of units consumed: %d\n", unit);
  printf ("billamount: %lf\n", billamount);
}
