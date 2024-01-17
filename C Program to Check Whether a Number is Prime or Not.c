/* C Program to Check Whether a Number is Prime or Not
25-December-2023
prabhakar Kumar
*/
#include<stdio.h>
int main()
{
      int n , i;
      printf("Enter the number\n");
      scanf(" %d",&n);
      for(i=2;i*i<=n;i++)
      {
              if(n%i==0)
              {
              printf("%d Is Not Prime Number",n);
              exit(0);
              }
      }

           printf("%d Is Prime Number",n);
}
