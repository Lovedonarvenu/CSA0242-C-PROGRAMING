#include<stdio.h>
main(){
float i,s,c,n;
printf("Enter a number :");
scanf("%f",&n);
if(n<0){
	printf("Invalid input");
}
else{
	s=n*n;
	c=s*n;
	printf("square = %.2f \n cube = %.2f",s,c);
}
}

