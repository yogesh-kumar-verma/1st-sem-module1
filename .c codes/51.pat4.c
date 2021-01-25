/*
*********
 *******
  *****
   ***
    *


*/
#include<stdio.h>
int main()
{
int j,i,k,temp=9;
for(j=0;j<5;j++)
{
    for(i=0;i<j;i++)
    printf(" ");
    for(k=0;k<temp;k++)
    printf("*");
    
    printf("\n");
      temp-=2;
}


return 0;}