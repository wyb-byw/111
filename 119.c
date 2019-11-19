#include <stdio.h>
int main(void)
{
    int term,sum,i,n,fac;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(sum=0,term=1,i=1;i<=n;i++)
    {
        term*=i;
        sum +=term;
        
    }
    printf("sum=%d",sum);
    return 0;
}