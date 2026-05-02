#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name [100];
    char max_speed[100];
    char price[100];
};
void main ()
{
    int n;
    printf("enter number of cars");
    scanf("%d",&n);
    struct car b[3];
    for(int i=0;i<3; i++)
    {
        printf("enter name of car");
        scanf("%s", b[i].name); 

        printf("enter max speed of car");
   scanf("%s",b[i].max_speed);
   
   printf("enter the price");
   scanf("%d",&b[i].price);
}
printf("your information:\n");
    for (int i=0;i<n;i++)
    {
        printf("%f\n",b[i].name);
        printf("%f\n",b[i].max_speed);
        printf("%f\n",b[i].price);
    }
}