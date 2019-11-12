    printf("Enter n (100>=n>=0):\n");
    scanf("%d" , &n);
    if(n>=90){
        printf("A");
    }
    else if(n<90&&n>=80){
        printf("B");
    }
    else if(n<80&&n>=70){
        printf("C");
    }
    else if(n<70&&n>=60){
        printf("D");
    }
    else{
        printf("E");
    return 0;
}