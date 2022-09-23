#include<stdio.h>
int main(){
    int a = 4;
    int b = 3;
    int c = 5;
    int equation = a*a + b*b + c*c + 2*(a*b + b*c + c*a);
    printf("result of equation is : %d",equation);
}
