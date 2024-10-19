#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,sum=0;
   printf("enter an integer:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    printf("%d!",i);
    int fact=1;
    fact=fact*i;
    sum=sum+fact;
   }
   printf("\b=%d",sum);
    return 0;

}



