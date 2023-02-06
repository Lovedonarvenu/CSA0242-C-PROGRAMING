#include<stdio.h>
int i,j,k,x,l;
max(int a[20],int n){
	for (j=0;j<=n-1;j++)
	{
	for (k=j+1;k<=n-1;k++)
	{
		if (a[j]>a[k])
		{
			x=a[k];
			a[k]=a[j];
			a[j]=x;
		}
	}
	}
	return a[n-1];
}
main()
{
	int n,m;
	printf("Enter number of elemets in array:\n");
	scanf("%d",&n);
	int a[20];
	
	for (i=0;i<=n-1;i++)
	{
	printf("enter element %d:\n",i+1);
	scanf("%d",&a[i]);
	}
	m=max(a,n);
	printf("Maximum element : %d",m);
}

