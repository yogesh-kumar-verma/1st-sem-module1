#include<stdio.h>
int main()
{
int fir,num,temp,arm=0;
printf("enter the number\n");
scanf("%d",&num);
fir=num;
while(num!=0)
{
temp=num%10;
arm+=(temp*temp*temp);
num/=10;

}
printf("%d",arm);
if(arm==fir)
{printf("\narmastrong number");}
else
{printf("\nnot armastrong number");}

return 0;
}