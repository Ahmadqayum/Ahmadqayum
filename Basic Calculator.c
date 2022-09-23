#include<stdio.h>
//basic calculator which can do bodmas
int main(){
    int x;
    int y;
    printf("enter x = ");
    scanf("%d",&x);
    printf("enter y = ");
    scanf("%d",&y);
    int sum = x+y;
    int multiply = x*y;
    int divide = x/y;
    int subtract = x-y;
    printf("sum is %d \n",sum);
    printf("multiply is %d \n",multiply);
    printf("divide is %d \n",divide);
    printf("subtract is %d \n",subtract);
    return 0;
}
