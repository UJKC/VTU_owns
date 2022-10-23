#include <stdio.h>
#include <stdlib.h>

void my_strcat (char str1[], char str2[]);
void my_strcmp (char str1[], char str2[]);
void my_strlen (char str1[]);

void
main ()
{
  char st1[30], st2[30];
  printf ("Enter the two string\n");
  scanf ("%s %s", st1, st2);
  my_strlen (st1);
  my_strlen (st2);
  my_strcat (st1, st2);
  my_strcmp (st1, st2);
}

void
my_strcat (char str1[], char str2[])
{
  int i = 0, j = 0;
  while (str1[i] != '\0')
    {
      i++;
    }
  while (str2[j] != '\0')
    {
      str1[i + j] = str2[j];
      j++;
    }
  str1[i + j] = '\0';
  printf ("STRING CONCATENATION\nConcatenated string is %s\n", str1);
}

void
my_strcmp (char str1[], char str2[])
{
  int temp, i = 0;
  while ((str1[i] == str2[i]) && (str1[i] != '\0'))
    {
      i++;
    }
  temp = str1[i] - str2[i];
  if (temp == 0)
    printf ("STRING COMPARE\nStrings are same\n");
  else
    printf ("STRING COMPARE\nstrings are not same\n");
}

void
my_strlen (char str1[])
{
  int i = 0;
  while (str1[i] != '\0')
    {
      i++;
    }
  printf ("STRING LENGTH\nLength of the string is %s : %d\n", str1, i);
}
