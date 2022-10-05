#include<stdio.h>
int main(){
    float cyclist_Ali;
    float distance_covered;
    printf("DISTANCE COVERED BY ALI IS : km");
    scanf("%f",&distance_covered);
    float distance_covered_km_into_meter = distance_covered*1000;
    float hours;
    float minutes;
    printf("enter hour = ");
    scanf("%f",&hours);
    printf("enter minutes = ");
    scanf("%f",&minutes);
    float hours_minutes_into_seconds=(hours*3600)+(minutes*60);
    float speed_of_cyclist_ali=distance_covered_km_into_meter/hours_minutes_into_seconds;
    printf("THE SPEED OF CYCLIST ALI IS %fm/s\n",speed_of_cyclist_ali);

    float cyclist_Haider;
    float Distance_Covered;
    printf("DISTANCE COVERED BY HAIDER IS : km");
    scanf("%f",&distance_covered);
    float Distance_Covered_Km_Into_Meter = distance_covered*1000;
    float Hours;
    float Minutes;
    printf("enter hour = ");
    scanf("%f",&hours);
    printf("enter minutes = ");
    scanf("%f",&minutes);
    float Hours_Minutes_Into_Seconds=(hours*3600)+(minutes*60);
    float speed_of_cyclist_haider=Distance_Covered_Km_Into_Meter/Hours_Minutes_Into_Seconds;
    printf("THE SPEED OF CYCLIST HAIDER IS %fm/s\n",speed_of_cyclist_haider);
}
