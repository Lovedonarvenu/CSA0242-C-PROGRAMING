#include <stdio.h>
main()
{
   int n, m, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &n, &m);

   p = &n;
   q = &m;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}

