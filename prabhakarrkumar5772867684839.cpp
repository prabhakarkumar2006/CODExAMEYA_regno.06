#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{	
printf("<\f>welcome to my calculater<\f>\n   \n choose    any     options :----- \n addition {+}\n substract {-}\n multiply {*}\n divide {/}   \n exit {0}\n\n ");
while(1)
	{
	float num1;
	float num2;
	float num3;
	float num4;
	char op;
	float result;
	printf("enter the operation:");
	scanf(" %c",&op);
	printf("Enter the first number:");
	scanf(" %f",&num1);
	printf("enter the second number:");
	scanf("%f",&num2);
	switch (op)
	{
	case'+':
	result=num1+num2;
	printf("%f",result);
	break;
	case'-':
	result=num1-num2;
	printf("%f",result);
	break;
	case'*':
	result=num1*num2;
	printf("%f",result);
	break;
	case'/':
	result=num1/num2;
	printf("%f",result);
	break;
	case'd' :
	exit(0);
	break;
	default :
		printf("1>.Enter the valid number \n 2>.check your opreater\n 3>. try again next row :");
	}	
}
}
