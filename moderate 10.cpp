#include<stdio.h>
main( )
{
int  a[25], n, i ;
float  avg = 0, sum = 0 ;
printf(" Enter the Numbers of element in Array: ");
scanf("%d",&n) ;
printf("Enter an Element : \n") ;
for (  i = 0 ; i < n ; i++)
{
scanf("%d",& a[i]) ;
}
for (  i = 0 ; i < n ; i++)
{
sum = sum + a[i] ;
avg = sum / n ;}
printf("\n Sum of Element of Array is : %.2f ",sum) ;
printf("\n Average of Element of Array are : %2.f ",avg) ;
}

