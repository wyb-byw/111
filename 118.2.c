#include <stdio.h>
int main (void)
{
    int x;
    printf("year\n");
    scanf("%d",&x);
    if(
        x%4==0 && x%100!=0)
    {
    printf("%d is year\n",x);}
    else{
        printf("%d is not year");

    }
    if(
        x%100==0
    )
    {printf("%d is year\n",x);}
    return 0;

}