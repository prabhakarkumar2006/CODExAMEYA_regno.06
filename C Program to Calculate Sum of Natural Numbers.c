/*C Program to Calculate Sum of Natural Numbers
8 - January-2024
Ankit Kumar Singh
*/

#include <stdio.h>

int main ()
{
  int n;
  printf ("Enter A Positive Number : ");
  scanf ("%d", &n);

  if (n > 0)
    {
      printf ("The Sum Of Natural Numbers From 1 To %d = %d", n,
	      n * (n + 1) / 2);
    }
}
