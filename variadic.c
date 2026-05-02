#include <stdio.h>
#include <stdarg.h>
int sum(int count, ...)
 {
    va_list args;
    va_start(args, count);
    int result = 0;
    for (int i=1; i < count; i++) 
    {
        int n=va_arg(args, int);
        result=result+n;
    }
    va_end(args);
    printf("%d",result);
}
    void main()
 {
    printf("sum of 3 numbers %d",sum (3,5,6,7));
}