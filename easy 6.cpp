#include<stdio.h>
main()
{
int age,x;
printf("enter your age:");
scanf("%d",&age);
if(age<=0){
	printf("Invalid input");
}
else{
printf("You can vote in %d years",18-age);
}
}

