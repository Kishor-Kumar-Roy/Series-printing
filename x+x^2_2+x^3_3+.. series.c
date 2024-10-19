#include<stdio.h>
#include<math.h>
int main()
{
    float n,i,x,sum,p;
    printf("enter the term & value of x:");
    scanf("%f %f",&n ,&x);
    sum=x;
    printf("%.0f+",x);
    for(i=2;i<=n;i++)
    {
        printf("%.0f^%.0f/%.0f+",x,i,i);
        p=pow(x,i);
        sum=sum+(p/i);
    }
    printf("\b=%.2f",sum);
    return 0;
}