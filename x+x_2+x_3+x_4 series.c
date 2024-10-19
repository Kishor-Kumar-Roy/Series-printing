#include<stdio.h>
int main()
{
    float x,i,n,sum=0;
    printf("enter an integer: ");
    scanf("%f",&n);
    printf("enter value of x: ");
    scanf("%f",&x);
    printf("%.0f+",x);
    for(i=2;i<=n;i++)
    {
        printf("%.0f/%.0f+",x,i);
        sum=sum+(x/i);
    }
    printf("\b=%.3f",x+sum);
    return 0;

}



