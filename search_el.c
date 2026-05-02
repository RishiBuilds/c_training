#include <stdio.h>
int search (int arr[],int key,int n)
{
for (int i=0; i<n; i++)
{
    if (arr[i]==key)
    return 1;
}
return 0;
}
void main ()
{
    int arr[7]={56,876,867,98,95,90,34};
    int n=7;
    int key;
    printf("what are you searching?");
    scanf("%d",&key);
    printf("%d",search(arr,key,n));  
}