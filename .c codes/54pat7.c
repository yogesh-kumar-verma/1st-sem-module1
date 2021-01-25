/*\
0
1 2
3 4 5
6 7 8 9
10 11 12 13 14

*/

/* C program – Half Pyramid Pattern Printing using numbers */
#include<stdio.h>
int main()
{
int i, j,n,k=0;
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(j=1; j<=i;j++)
{
printf("%d ",k);
k+=1;
}
printf("\n");
}
return 0;
}