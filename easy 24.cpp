#include <stdio.h>
#include <malloc.h>
ore(int x){
	if(x%2==0){
		return 2;
	}
	else{
		return 1;
	}
}
main(){
   int x,r;
   printf("Enter a number:");
   scanf("%d",&x);
   if(x>0){
   r=ore(x);
   if(r==1){
   	printf("odd");
   }
   else if(r==2){
   	printf("even");
   }
}
else{
	printf("Invalid input");
}
}

