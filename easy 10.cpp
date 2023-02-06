#include <stdio.h>
main()
{
int i,j,n,k;
float x;
printf("Enter number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("%d ",i);
	}
	printf("\n");
}
printf("Test condition :\n");
for(k=1;k<=n;k++){
	x+=1;
	for(j=1;j<=k;j++){
		printf("%.2f",x/10);
	}
	printf("\n");
}
}

