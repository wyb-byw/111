#include <stdio.h>
int main(void)
{int x=256;
printf("256:%d-%d-%d\n", x%10      , x%100/10      ,  x/100    );
return 0;
}