/* C Program for Area and Perimeter of Rectangle
8 - January-2024
prabhakar kumar 
*/

#include <stdio.h>

int main ()
{
  int l, w;
  printf ("Enter The Length Of Rectangle : ");
  scanf ("%d", &l);

  printf ("Enter The Width Of Rectangle : ");
  scanf ("%d", &w);

  printf ("The Area Of Rectangle \n=%d X %d\n=%d\n", l, w, l * w);

  printf ("The Perimeter Of Rectangle \n=2(%d + %d)\n=%d", l, w, 2 * (l + w));


  return 0;
}
