/* C Program to Find Factorial of a Number
8 - January-2024
Ankit Kumar Singh
*/

#include <stdio.h>

int main ()
{
  int n, s = 1;
  printf ("Enter A Number : ");
  scanf ("%d", &n);

  for (int i = n; i > 1; i--)
    {
      s *= i;
    }

  printf ("The Factorial Of %d = %d", n, s);
}
