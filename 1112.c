#include <stdio.h>
int main(void)
{
    int n,i,grade;
    printf("Enter student number=\n");
    scanf("%d" , &grade);
    switch(grade){
        case 4: printf("A");
        break;
        case 3: printf("B");
        break;
        case 2: printf("C");
        break;
        case 1: printf("D");
        break;
        case 0: printf("E");
        break;
        default : printf("illegal grade");
        break;
    }

    return 0;
}