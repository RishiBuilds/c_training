#include <stdio.h>
#include <math.h>
void main()
{
    int x1,y1,x2,y2;
    printf("enter the values of x1,y1:");
    scanf("%d%d",&x1,&x2);
    printf("enter the values of x2,y2:");
    scanf("%d%d",&x2,&y2);
    int d1 = x2-x1;
    int d2 = y2-y1;
    double dist = sqrt(d1*d1+d2*d2);
    printf("distance is %lf",dist);
}