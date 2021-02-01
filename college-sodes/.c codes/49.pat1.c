/*
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/
// C program to print inverted half pyramid pattern using stars
#include <stdio.h>
int main()
{
int i, j, n=5, k = 0;

for(i = n; i >= 1; --i)
{
for(j = 1; j <= i; ++j)
{
printf("*");
}
printf("\n");
}

return 0;
}