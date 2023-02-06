#include <stdio.h>
main()
{
int i,j,k,l,n;
printf("Enter number of rows:");
scanf("%d",&n);
l=n-1;
for(i=1;i<=n;i++){
	for(j=1;j<=l;j++){
		printf(" ");
	}
	l-=1;
	for(k=i;k>=1;k--){
		printf("%d ",k);
	}
	printf("\n");
}
printf("Test condition :\n");
l=n-1;
for(i=1;i<=n;i++){
	for(j=1;j<=l;j++){
		printf(" ");
	}
	l-=1;
	for(k=i;k>=1;k--){
		printf("%d ",k*k);
	}
	printf("\n");
}
}

