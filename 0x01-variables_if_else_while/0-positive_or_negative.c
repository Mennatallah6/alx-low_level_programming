#include <stdio.h>
#include <stdlib.h>

int  main(void)

{
  int n;


  printf("please enter a number:");
  scanf("%d",&n);

if(n>0)
         printf("%d is positive\n",n);
else if (n==0)
         printf("%d is zero\n",n);
else
         printf("%d is negative\n",n);

return(0);
}


