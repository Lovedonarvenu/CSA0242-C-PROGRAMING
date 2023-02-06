#include <stdio.h>

main() {
  char str[100];
  int i,n, f=1;
  printf("Enter an integer: ");
  scanf("%d", &n);
  //n = atoi(str);
  if(n>=0){
	if(n>=0){
	while(n>0){
		f=f*n;
		n--;
	}
  printf("Factorial = %d", f);
}
}
else{
	printf("Invalid input");
}
}

