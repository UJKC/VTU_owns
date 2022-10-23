#include <stdio.h>

struct student
{
  char name[30];
  char usn[11];
  int marks;
} s[100];
void
main ()
{
  int i, n;
  float sum = 0.0, average = 0.0;
  printf ("Enter the number of students:\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      printf
	("-----------------------------------------------------------\n");
      printf ("Enter the name if student:\n");
      scanf ("%s", s[i].name);
      printf ("Enter the usn:\n");
      scanf ("%s", s[i].usn);
      printf ("Enter the marks:\n");
      scanf ("%d", &s[i].marks);
      sum = sum + s[i].marks;
    }
  average = sum / n;
  printf ("Student who scored less than average:\n");
  for (i = 0; i < n; i++)
    {

      if (s[i].marks < average)
	{
	  printf
	    ("-------------------------------------------------------\n");
	  printf ("Enter the name if student: %s\n", s[i].name);
	  printf ("Enter the usn: %s\n", s[i].usn);
	  printf ("Enter the marks: %d\n", s[i].marks);
	}
    }
  printf ("Student who scored above average:\n");
  for (i = 0; i < n; i++)
    {

      if (s[i].marks > average)
	{
	  printf
	    ("-------------------------------------------------------\n");
	  printf ("Enter the name if student: %s\n", s[i].name);
	  printf ("Enter the usn: %s\n", s[i].usn);
	  printf ("Enter the marks: %d\n", s[i].marks);
	}
    }
}
