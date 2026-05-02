#include <stdio.h>
int sum_digits_recur(int n)
{
    if(n==0)
    return;
    int digit= n%10;
     return digit+sum_digits_recur(n/10);
}
void main()
{
    int n ;
    printf("enter n");
    scanf("%d",&n);
    printf("%d",sum_digits_recur(n));
}