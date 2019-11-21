#include <stdio.h>
#include <math.h>
int main (void)
{
    int d,f;
    double item , pi;
    f=1;
    d=1;
    item=1.0;
    pi=0;
    while(fabs(item)>=0.0001){
        item=f*1.0/d;
        pi=pi+item;
        f=-f;
        d=d+2;
    }
    pi=pi*4;
    printf("pi=%.4f\n",pi);
    return 0;
}