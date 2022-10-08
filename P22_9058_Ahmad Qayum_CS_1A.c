#include<stdio.h>

#include<math.h>

int main(){

    float pack_height;

    float pack_width;

    float pack_length;

    printf("enter package length : ");
    scanf("%f", &pack_length);

    printf("enter package height : ");
    scanf("%f", &pack_height);

    printf("enter package width : ");
    scanf("%f", &pack_width);

    float volume_of_package = pack_height*pack_length*pack_width;
    printf("Volume of package is : %.1fm\n",volume_of_package);

    float box_height;

    float box_width;

    float box_length;

    printf("enter box length : ");
    scanf("%f", &box_length);

    printf("enter box height : ");
    scanf("%f", &box_height);

    printf("enter box width : ");
    scanf("%f", &box_width);

    float volume_of_box = box_height*box_length*box_width;
    printf("Volume of box is : %.1fm\n",volume_of_box);

    int div = volume_of_box/volume_of_package;

    if(volume_of_package == volume_of_box)
    {
        printf("PACKAGE CAN FIT PERFECTLY INSIDE THE BOX\n");
    }else if(volume_of_box >= volume_of_package)
    {
        printf("%d NUMBER OF PACKAGES CAN FIT INSIDE A BOX\n", div);
    }
    else{
        printf("PACKAGE CANNOT FIT PERFECTLY INSIDE THE BOX\n");
    }
    return 0;
}