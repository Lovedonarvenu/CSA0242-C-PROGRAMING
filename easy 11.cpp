#include<stdio.h>
main()
{
int i,j,n,m;
printf("Enter a number :");
scanf("%d",&n);
printf("Enter number of numbers :");
scanf("%d",&m);
if(n>0 && m>0){
	for(i=1;i<=m;i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
else{
	printf("Invalid input");
}
}

