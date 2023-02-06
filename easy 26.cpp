#include<stdio.h>
  int a,b,c,d,e,f,x,z=1;
  int choice()
  {
  	scanf("%d",&x);
  	if(x==1){
  		while (b != 0) {
        z *= a;
        --b;
    }
    printf("Power of given numbers is %d\n",z);
	  }
  	else if (x==2)
	{
   	c=add(a,b);
   	printf("Sum of given numbers is %d\n",c);
   }
   else if (x==3)
   { 
   	d=sub(a,b);
   	printf("differnce of given numbers is %d\n",d);
   }
   else if (x==4)
   {
	e=mul(a,b);
	printf("product of given numbers is %d\n",e);
	}
	else if (x==5)
	{
	f=div(a,b);
	printf("quotient of given numbers is %.2f",f);
	}
	else
	{
	printf("invalid input... Try again\n");
	choice();
	}
}
   int add(int x,int y)
   {
   	int z;
   	z=x+y;
   	return z;
   }
   int sub(int x,int y)
   {
   	int z;
   	if (x>y)
   	{
   	z=x-y;
   }
   else
   {
   z=y-x;
   return z;
	}
}
   int mul(int x,int y)
   {
   	int z;
   	z=x*y;
   	return z;
   }
    int div(int x,int y)
   {
   	int z;
   	z=(float)x/y;
   	return z;
   }
   main()
   {
   	printf("Enter 2 numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Choose an opertaion:\n 1:power\n 2:addition\n 3:subtraction\n 4:multiplication\n 5:division\n");
	choice();
   	
 }

