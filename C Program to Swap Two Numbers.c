/* C Program to Swap Two Numbers

17-December-2023

Ankit Kumar Singh
*/
#include<stdio.h>
main ()
{
    int a, b, c;
    printf ("Enter The First Number :  ");
    scanf ("%d", &a);
    printf ("Enter The Second Number :  ");
    scanf ("%d", &b);
    c = a;
    a = b;
    b = c;
printf ("After Swapping\nFirst Number = %d\nSecond Number = %d",a , b);
  
}