#include<stdio.h>

int main()
{
    int sum=0;
    int a=0;
    int b=1;
    int no_of_rows;
    printf("enter number of rows you want to print : ");
    scanf("%d",&no_of_rows);
    int numbers;
    for(int i=1;i<=no_of_rows;i++){
        for(int j=1;j<=i;j++){
            sum=a+b;
            printf("%d ",sum);
        a=b;
        b=sum;
            
        }
        printf("\n");
    }
}