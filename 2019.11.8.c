#include <stdio.h>
int main (void)
{
    double distance,cost;
    printf("Enter distance(distance>=0):\n");
    scanf("%lf",&distance);
    int time;
    printf("time\n");
    scanf("%d",&time);
    if(distance<=3){
        cost=10+(time/5)*2;
    }
    else if(3<distance<10){
        cost=(distance-3)*2+10+(time/5)*2;

    }
    else{
        cost=(distance-10)*3+10+14+(time/5)*2;
    }
    printf("cost=%.0f",cost);
    return 0;
}