#include <stdio.h>
 
int main()
{
    int i, num=10, sum = 0;
 
    for (i = 1; i <= num; i+2)
    {
        sum = sum + i;
    }
    printf ("Sum of first %d natural numbers = %d\n", num, sum);
    return 0;
}