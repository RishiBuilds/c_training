#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p=(float*)calloc(4,sizeof(float));
    p[0]=78;
    p[1]=90;
    p[2]=100;
    p[3]=125;
    printf("%f",p[0]);
    free(p);
}