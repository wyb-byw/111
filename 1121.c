#include <stdio.h>
int main (void)
{
    int a,b,n,i;
    printf("Enter n=\n");
    scanf("%d",&n);
    printf("Enter a=\n");
    scanf("%d",&a);
    int sum=0;
    b=a;
    for(i=1;i<=n;i++){
       sum+=b;
       b=b*10+a; 
    }
    printf("sum=%d",sum);
    return 0;
}