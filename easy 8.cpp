#include<stdio.h>
main()
{
int n,m,i,x,ch,r;
printf("enter start range:");
scanf("%d",&n);
printf("enter end range:");
scanf("%d",&m);
printf("Enter a number:");
scanf("%d",&x);
if(n<=0 || m<=0 || n==m || n>m || x<=0){
	printf("Invalid input");
}
else{
for(i=n;i<=m;i++){
	if(n<10){
	if(i!=x){
	printf("%d ",i);
}
}
else{
	for(i=n;i<=m;i++){
		if(i%10!=x){
			printf("%d ",i);
		}
		else{
			continue;
		}
}
}
}
}
}

