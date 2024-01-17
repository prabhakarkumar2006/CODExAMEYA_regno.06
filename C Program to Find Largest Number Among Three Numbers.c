/*C Program to Find Largest Number Among Three Numbers
8 - January-2024
Ankit Kumar Singh
*/

#include <stdio.h>

int main ()
{
  int x, y, z;
  printf ("Enter Three Numbers : ");
  scanf ("%d%d%d", &x, &y, &z);

  if (x > y)
    {
      if (x > z)
	{
	  printf ("%d Is Largest Number Among %d , %d and %d", x, x, y, z);
	}

      else
	{
	  printf ("%d Is Largest Number Among %d , %d and %d", z, x, y, z);
	}
    }

  else if (y > z)
    {
      printf ("%d Is Largest Number Among %d , %d and %d", y, x, y, z);
    }

  else
    {
      printf ("%d Is Largest Number Among %d , %d and %d", z, x, y, z);
    }
}
