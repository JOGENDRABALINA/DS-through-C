#include<stdio.h>
int main()
{
	printf("press 1 for Addition\n");
	printf("press 2 for Subtraction\n");
	printf("press 3 for Multiplication\n");
	int m;
	printf("Choose any one option among these: ");
	scanf("%d",&m);
	int b,c,d;
	printf("Enter the number: ");
	scanf("%d",&b);
	printf("Enter the second number: ");
	scanf("%d",&c);
	if (m==1)
	{
	   d=b+c;
	   printf("%d",d);	
	}
    else if (m==2)
	{
	   d=b-c;
	   printf("%d",d);	
	}
	else if (m==3)
	{
	   d=b*c;
	   printf("%d",d);	
	}
	else
	{
		printf("chi poora");
	}
}
