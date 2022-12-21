#include<stdio.h>
int maximum(int number)
{
    int count=3;
    int final_velocity=0;
    int initial_velocity=number;
    printf("------------------------\n");
    for(int i=1;i<=count;i++)
    {
          printf("enter a number : ");
        scanf("%d",&number);
         if(final_velocity<number)
        {
            final_velocity=number;
        }
        if(initial_velocity>number)
        {
            initial_velocity=number;
        }
    }
    printf("------------------------\n");
    printf("Maximum number is %d\n",final_velocity);
    printf("------------------------\n");
    printf("Minimum number is %d\n",initial_velocity);
    int change_in_velocity = final_velocity-initial_velocity;
    printf("------------------------\n");
    printf("Change in velocity is %d\n",change_in_velocity);
    printf("------------------------\n");
     
}
int main()
{
    int number;
    
    int num=maximum(number);

}