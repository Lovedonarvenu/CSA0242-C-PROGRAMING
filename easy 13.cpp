#include<stdio.h>
main()
{
int i,j,n,m,arr[20],neg=0;
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("enter an element :");
	scanf("%d",&arr[i]);
}
	for(i=0;i<n;i++){
		if(arr[i]<0){
			neg+=1;
		}
	}
	printf("Number of negative numbers : %d",neg);
}

