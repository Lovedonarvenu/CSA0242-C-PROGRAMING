#include <stdio.h>
main() {
  int array[30],x,n,i,p=0,ch=0;
  	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("enter an element :");
	scanf("%d",&array[i]);
}
printf("Enter an element to search :");
scanf("%d",&x);
  for (i = 0; i < n; i++){
    if (array[i] == x){
    	p=i;
    	ch+=1;
	}
}	
  if(ch==0){
  	printf("Element not found");
  }
  else{
  	printf("Element found at position: %d", p+1);
  }
}

