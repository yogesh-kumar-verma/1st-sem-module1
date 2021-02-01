#include<stdio.h>
int main()
{
int n,f1=0,f2=1,next=0;
printf("enter the num upto fibonacci -\n");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{if(next<1)
{
    next++;
    printf("%d,",next);}
else{
    next=f1+f2;
    printf("%d,",next);
    f1=f2;
    f2=next;
}
}
return 0;
}