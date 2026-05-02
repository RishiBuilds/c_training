#include <stdio.h>
void main()
{
    int arr[4][2]={ {21,34},{19,48},{58,67},{56,87}};
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    {
        printf("%d\n",arr[i][j]);
    }
    }
}