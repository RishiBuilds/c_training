#include <stdio.h>
void main()
{
    int a=561204;
    int *p=&a;
    printf("a value is %d\n",a);
    printf("a adress is %p\n",p);
    printf("p points to %d",*p);
}