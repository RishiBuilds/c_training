#include <stdio.h>
void main ()
{
    int age;
    float h;
    printf("enter age:");
    scanf("%d", &age);
    printf("enter height:");
    scanf("%f", &h);
    if ( (age>12) && (h>4.5))
    {
        printf("you can ride the roller coaster!");
    }
    else 
    {
        printf("grow up and come back");
    }
}