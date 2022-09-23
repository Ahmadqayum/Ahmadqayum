#include<stdio.h>
int main(){
    int a = 345;
    int b = a/100;
    int b1 = a%100;
    int c = b1/10;
    int c1 = b1%10;
    int value = (c1 * 100) + (c * 10) + b;
    printf("THE REVERSE OF %d, WILL BE;\n %.03d",a,value);
}
