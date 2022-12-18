#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0;
    char name[100];
    puts("write a character : ");
    gets(name);
    int count=strlen(name);
    for(int i=0;i<count;i++)
    {
        if(name[i] != name[count-i-1]){
        flag=1;
        break;
        }
    }
    if(flag==1){
        printf("it is not a palindrome");
    }else{
        printf("it is a palindrome");
    }
}