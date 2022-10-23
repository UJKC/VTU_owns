#include <stdio.h>

int
main ()
{
  int a[30], n, i, key, low, high, found = 0.0, mid;
  printf ("Enter no of elements in array:\n");
  scanf ("%d", &n);
  printf ("Enter the array elements:\n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("Enter the element to be found:\n");
  scanf ("%d", &key);
  low = 0;
  high = n - 1;
  while (low <= high)
    {
      mid = (low + high) / 2;
      if (a[mid] == key)
	{
	  found = 1;
	  break;
	}
      else if (a[mid] > key)
	high = mid - 1;
      else
	low = mid + 1;
    }
  if (found == 1)
    printf ("Element id found in %d\n", mid + 1);
  else
    printf ("Element not found\n");
}
