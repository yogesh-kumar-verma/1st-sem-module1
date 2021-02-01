#include <stdio.h>
 
int main()
{
 

    int x, y;
 
    int result;
 
    x = 3;
    y = 4;
    result = x % y;
    printf("%d", result);
 
    result = y % x;
    printf("\n%d", result);
 

 
    return 0;
}