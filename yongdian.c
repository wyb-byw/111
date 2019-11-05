#include <stdio.h>
int main (void)
{ 
    double x ,y;
    printf("Enter x (x>=0):\n");
    scanf("%lf" , &x); 
    if(x<=50){
        y=0.53*x;
    }
    else{y=0.53*50+(x-50)*(0.53+0.05);

    
    }
    printf("y=%f,%.2f\n",x,y);
    return 0;

    


    
}
