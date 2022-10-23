#include <stdio.h>

void
main ()
{
  long num, rev = 0, temp, digit;
  printf ("Enter the digit:\n");
  scanf ("%ld", &num);
  temp = num;
  while (num != 0)
    {
      digit = num % 10;
      rev = rev * 10 + digit;
      num = num / 10;
    }
  printf ("Given number is %ld\n", temp);
  printf ("Reverse of this number is %ld\n", rev);
  if (temp == rev)
    printf ("Number is pallindrome\n");
  else
    printf ("Number is not pallindrome\n");
}
