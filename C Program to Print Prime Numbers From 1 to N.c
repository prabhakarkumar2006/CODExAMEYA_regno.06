/* C Program to Print Prime Numbers From 1 to N
17-December-2023
prabhakar Kumar 
*/
#include<stdio.h>
main()
{
     int n , i , j , c;
     printf("Enter The Number : ");
     scanf("%d", &n);

     printf("The Prime Numbers From 1 To %d Are Following :-\n",n);

     for(i=1;i<=n;i++)
     {
      c=1;
      for(j=2;j*j<=i;j++)
      {
          if(i%j==0)
          {
              c++;
              break;
          }

      }


           if(c==1)
           {
             printf("%d\t",i);
           }

     }

}
