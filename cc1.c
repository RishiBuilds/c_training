#include <stdio.h>
#include <stdlib.h>
int subarr (int arr[],int n)
{
    int sub=arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr [5]={155,66,87,89,54};
    int size=5;
    printf("%d",subarr(arr,size));
}