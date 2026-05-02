#include <stdio.h>
void product_value(int a,int b,int c)
{
    int product = a*b*c;
    printf("%d",product);
}
void product_ref(int*a,int *b,int *c)
{
    int product =*a * *b * *c;
    printf("%d",product);
}
void main()
{
    int a=1;
    int b=2;
    int c=3;
    printf("call by value: \n");
    product_value(a,b,&c);  
    printf("call by reference: \n");
    product_ref(&a,&b,&c);  
}