#include<stdio.h>
void add_value(int a,int b,int c)
{
    int add = a+b+c;
    printf("%d",add);
}
void add_ref(int*a,int *b,int *c)
{
    int add =*a + *b + *c;
    printf("%d",add);
}
void main()
{
    int a=9;
    int b=8;
    int c=2;
    printf("call by reference: \n");
    add_ref(&a,&b,&c);  
}