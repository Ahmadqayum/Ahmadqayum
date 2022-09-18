#include<stdio.h>
int main(){
    int x;
    int y;
    int operations;
    printf("enter operations = ");
    scanf("%d",&operations);
    switch (operations)
    {
    case 1 : printf("MULTIPLICATION \n");
    printf("enter x = ");
    scanf("%d",&x);
    printf("enter y = ");
    scanf("%d",&y);
    int multiply = x*y;
    printf("VALUE IS %d \n",multiply);
    break;
    case 2 : printf("Division \n");
    printf("enter x = ");
    scanf("%d",&x);
    printf("enter y = ");
    scanf("%d",&y);
    int divide = x/y;
    printf("VALUE IS %d \n",divide);
    break;
    case 3 : printf("Addition \n");
    printf("enter x = ");
    scanf("%d",&x);
    printf("enter y = ");
    scanf("%d",&y);
    int add = x+y;
    printf("VALUE IS %d \n",add);
    break;
    case 4 : printf("Subtraction \n");
    printf("enter x = ");
    scanf("%d",&x);
    printf("enter y = ");
    scanf("%d",&y);
    int subtract = x-y;
    printf("VALUE IS %d \n",subtract);
    break;
    default : printf("invalid value \n");
    }
    return 0;
}