#include <stdio.h>

unsigned long fnbin2dec (unsigned long);

int
main ()
{
  unsigned long bin, dec;
  printf ("Enter the binary digits:\n");
  scanf ("%lu", &bin);
  dec = fnbin2dec (bin);
  printf ("Decimal correspondent to binary digits %lu is %lu", bin, dec);
  return 0;
}

unsigned long
fnbin2dec (unsigned long ival)
{
  unsigned long newval, lastdigit;
  if (ival == 0 || ival == 1)
    return ival;
  else
    {
      newval = ival / 10;
      lastdigit = ival % 10;
      return fnbin2dec (newval) * 2 + fnbin2dec (lastdigit);
    }
}
