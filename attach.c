#include <stdio.h>
void names(char first[],char last[])
{
    int i=0;
    char full[100];
    while(first[i]!='\0')
    {
        full[i]=first[i];
        i++;
    }

    full[i]= ' '; 
    i++;
    int j=0;
    while(last[j]!='\0') 
    {
        full[i]=last[j];
        i++;
        j++;
    }
    full[i]='\0';
    printf("%s",full);
}
    void main()
    {
        char first[100] = "rajesh";
        char last[100] =  "kumarsanghavi";
        names(first,last);
    }