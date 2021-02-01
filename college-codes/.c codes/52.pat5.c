/*
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5


*/
/* C program – Pyramid Pattern Printing using numbers */
#include<stdio.h>
int main()
{
int i, j,n;
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(j = i; j <= n; j++)
{
printf("%d ",j);
}
printf("\n");
}
return 0;
}