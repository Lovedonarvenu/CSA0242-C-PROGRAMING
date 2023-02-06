#include<stdio.h>

main()

{

	int n,m;

	int *ptr1,*ptr2;

	

	printf("Enter first number:\n");

	scanf("%d",&n);

	printf("Enter second number:\n");

	scanf("%d",&m);

	ptr1=&n;

	ptr2=&m;

	if(*ptr1>*ptr2)

	{

	printf("Maximum number is %d",*ptr1);

	}

	else

	{

	printf("Maximum number is %d",*ptr2);

	}
}

