#include<stdio.h>
#include<math.h>
int isPrime(int x)
{
    int i;
    for(i=2;i<sqrt(x);i++)
    {
        if(x%i==0){
            break;
        }
    }
    if(i>sqrt(x)){
        return 1;
    }
    else{    
        return 0;
    }
}
int main(void)
{
    int n;
    for(n=2;n<=100;n++){
        if(isPrime(n)==1){
        printf("%d\n",n);
    }
    }
   return 0;
}