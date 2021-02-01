#include<stdio.h>
int main()
{
int num,temp,fir,reaminder=0;
printf("enter the number\n");
scanf("%d",&num);
fir=num;
while(num>0)
{
temp=num%10;
reaminder=reaminder*10+temp;
num/=10;

}
printf("%d",reaminder);

} 