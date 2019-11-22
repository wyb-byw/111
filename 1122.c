#include <stdio.h>
int main (void)
{
    int n,x=0,sum=0; 
    printf("Enter n=\n");
    scanf("%d",&n);
    while (n>0){
        x=n%10;
        sum+=x;
        n/=10;
    }
    printf("sum=%d\n",sum);
    return 0;
}
