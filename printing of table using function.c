#include<stdio.h>
int table(int number){
    for(int i=1;i<=10;i++){
      int mul=number*i;
        printf("%d x %d = %d\n",number,i,mul);
    }
}
int main()
{
    char ch;
    int number;
     printf("enter a table = ");
    scanf("%d",&number);
            int d=table(number);
    do{
        printf("do you want to print another table?Y/N");
        scanf(" %c",&ch);
        if(ch=='Y' || ch=='y'){
            printf("enter a table = ");
    scanf("%d",&number);
            int d=table(number);
        }else if(ch=='n'||ch=='N'){
            printf("Takhta mara wai");
            break;
        }
    }while(number>0);
}