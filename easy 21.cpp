#include<stdio.h>

main() {
  char str[20], *pt;
  int i = 0;
  printf("Enter Any string: ");
  scanf("%s",&str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);

}

