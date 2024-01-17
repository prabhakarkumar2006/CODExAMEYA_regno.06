/* C Program to Find Simple interest 
28-December-2023
Ankit Kumar Singh
*/
#include<stdio.h>
main()
{
   float p , r , t;
   printf("Enter The Principal Amount : ");
   scanf("%f",&p);

   printf("Enter The Rate Of Interest : ");
   scanf("%f",&r);

   printf("Enter The Time : ");
   scanf("%f",&t);

   printf("Simple Interest = %f", p*r*t/100);
}