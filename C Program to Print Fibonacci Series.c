/* C Program to Print Fibonacci Series
8 - January-2024
Ankit Kumar Singh
*/

#include <stdio.h>

int main ()
{
  int a, x = 0, y = 1;

  printf ("Enter How Many Terms You Want Of Fibonacci Series : ");
  scanf ("%d", &a);
  if (a > 0)
    {
      printf ("0");
      for (int i = 1; i < a; i++)
	{
	  y = y + x;
	  x = y - x;
	  printf ("\t%d", x);
	}
    }
  return 0;
}
