#include <stdio.h>  
int main()  
{  
    int n,i;  
    int sum=0;  
    printf("Enter a number");  
    scanf("%d",&n);  
    int k=n;  
    int r;  
    while(k!=0)  
    {  
        r=k%10;    
        k=k/10;  
        sum=sum;  
    }  
    if(sum==n)  
    {  
        printf("\ngiven number is a arm strong number");  
    }  
    else  
    {  
        printf("\ngiven number is not arm strong");  
    }  
    return 0;  
}  
int fact(int r)  
{  
    int mul=1,i;  
    for(i=1;i<=r;i++)  
    {  
        mul=mul*i;  
    }  
    return mul;  
      
}  

