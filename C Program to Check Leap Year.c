/*C Program to Check Leap Year
8 - January-2024
prabhakar Kumar
*/

#include <stdio.h>

int main ()
{
  int y;
  printf ("Enter A Year : ");
  scanf ("%d", &y);

  if (y % 4 == 0)
    {
      printf ("%d Is A Leap Year", y);
    }

  else
    {
      printf ("%d Is Not A Leap Year", y);
    }

}
