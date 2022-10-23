#include <stdio.h>

void
main ()
{
  int a[20], n, i, j, found = 0, key;
  printf ("Emter no of elements:\n");
  scanf ("%d", &n);
  printf ("Enter array elements:\n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("Enter the element to be searched:\n");
  scanf ("%d", &key);
  for (i = 0; i < n; i++)
    {
      if (key == a[i])
	{
	  found = 1;
	  j = i;
	}
    }
  if (found = 1)
    printf ("Element found at %d\n", j + 1);
  else
    printf ("Element not found\n");
}
