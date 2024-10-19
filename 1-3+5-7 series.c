#include <stdio.h>
int main()
{
    int n, i,sum=0,pos;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("series of %d is:\n", n);
    for (i = 1; i <=n*2; i++){
        if(i%2!=0)
        {
        if(pos%2!=0){
            printf("%d-",i);
            sum=sum+i;
        }
        else
        {
        printf("%d+",i);
        sum=sum-i;
        }
       pos++;
       }
    }
    printf("\b=%d",sum);
return 0;
}



