/* C Program to Check Whether Number is Even or Odd
8 - January-2024
Ankit Kumar Singh
*/

#include <stdio.h>

int main ()
{
  int n;
  printf ("Enter A Number : ");
  scanf ("%d", &n);

  if (n % 2 == 0)
    {
      printf ("%d Is A Evem Number", n);
    }

  else
    {
      printf ("%d Is A Odd Number", n);
    }
}
