#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d" , &num);
    
    if (num > 0){
        printf("The number is +ve.\n");

    }
    else if(num<0){
        printf("The no is -ve.\n");
    }
    else{
        printf("no is zero.\n");
    }
}
