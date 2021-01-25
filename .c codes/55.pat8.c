/*
15 14 13 12 11
10 9 8 7
6 5 4
3 2
1

*/
#include<stdio.h>
int main()
{
int i, j,n=5,k=15;

for(i = 1; i <= n; i++)
{
for(j = i; j <= n; j++)
{
printf("%d ",k);
k-=1;
}
printf("\n");
}
return 0;
}