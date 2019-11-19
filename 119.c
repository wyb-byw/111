#include <stdio.h>
int main(void)
{
    int term,sum,i,n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(sum=0,term=1,i=1;i<=n;i++)
    {
        term*=i;
        sum +=term;
    }
    printf("term=%d",term);
    return 0;
}