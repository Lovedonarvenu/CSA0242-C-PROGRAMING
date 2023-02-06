#include <stdio.h>

main() {
  char str[100];
  int i,n, reverse = 0, remainder,x=0,len,y,temp;
  printf("Enter an integer: ");
  scanf("%d", &n);
  //n = atoi(str);
  if(n>0){
  sprintf(str, "%d", n);
  len=strlen(str);
  for(i=0;i<len;i++){
  	y=isdigit(str[i]);
  	if(y==0){
  		x+=1;
	  }
  }
  if(x==0){
  	
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  if(reverse==0){
  	printf("Invalid input");
  }
  else{
  printf("Reversed number = %d", reverse);
}
}
else{
	printf("Invalid input");
}
}
else{
	temp=(n<0)?(-1*n):n;
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  if(reverse==0){
  	printf("Invalid input");
  }
  else{
  reverse=(n<0)?(-1*reverse):reverse;
  printf("Reversed number = %d", reverse);
}
}
}

