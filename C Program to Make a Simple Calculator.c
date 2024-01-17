/* C Program to Make a Simple Calculator
8 - January-2024
prabhakar Kumar 
*/

#include<stdio.h>
int
main ()
{
  int a, b, c;
  printf ("\n\n\t\t\t\t\t\tWelcome To Calculator");
  while (1 == 1)
    {
      printf
	("\n\nChoose Any Option\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division \nEnter 0 For exit\n\n\nYou Have Entered : ");
      scanf ("%d", &a);
      switch (a)
	{
	case 1:
	  {
	    printf ("Enter Two Numbers : \n");
	    scanf ("%d%d", &b, &c);
	    printf ("The Sum is : %d", b + c);
	  }

	  break;

	case 2:
	  {
	    printf ("Enter Two Numbers : \n");
	    scanf ("%d%d", &b, &c);
	    printf ("The Substraction is : %d", b - c);
	  }
	  break;

	case 3:
	  {
	    printf ("Enter Two Numbers: \n");
	    scanf ("%d%d", &b, &c);
	    printf ("The Multiplication is : %d", b * c);
	  }

	  break;

	case 4:
	  {
	    printf ("Enter Two Numbers : \n");
	    scanf ("%d%d", &b, &c);
	    printf ("The Division is : %f", (float) b / c);
	  }

	  break;

	case 0:
	  {
	    printf ("Calculator Program ended");
	    exit(0);
	  }
	  break;

	default:
	  {
	    printf ("Enter a valid input");
	  }
	}

    }
}
