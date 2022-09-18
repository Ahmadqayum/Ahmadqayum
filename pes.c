#include<stdio.h>
int main(){
    char character;
    printf("enter character = ");
    scanf("%c",&character);
    if(character>='A' && character<='Z'){
        printf("UPPER CASE \n");
    }else if(character>='a' && character<='z'){
        printf("lower case \n");

    }    else{
        printf("WRONG CHARACTER \n");
    }
    int numbers;
    printf("enter numbers = ");
    scanf("%d",&numbers);
    if(numbers>=0){
        printf("whole numbers \n");
        printf("integer \n");
    }else if(numbers>=0 && numbers<=0){
        printf("integers \n");
    }else if(numbers>0){
        printf("whole number \n");
        printf("integer \n");
        printf("natural numbers \n");
    }else{
        printf("wrong number \n");
    }
    return 0;
    
}
