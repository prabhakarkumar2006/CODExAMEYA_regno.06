/* C Program to Generate Multiplication Table
8 - January-2024
prabhakar Kumar 
*/

#include <stdio.h>

int main ()
{
  int n;
  printf ("Enter A Number : ");
  scanf ("%d", &n);

  for (int i = 1; i < 11; i++)
    {
      printf ("%d X %d = %d\n", n, i, n * i);
    }
}
