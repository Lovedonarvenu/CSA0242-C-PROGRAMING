#include <stdio.h>
#include <malloc.h>
sqr(float x){
	return x*x;
}
main(){
   float x,r;
   printf("Enter a number:");
   scanf("%f",&x);
   if(x>0){
   r=sqr(x);
   printf("Square: %.2f",r);
}
else{
	printf("Invalid input");
}
}

