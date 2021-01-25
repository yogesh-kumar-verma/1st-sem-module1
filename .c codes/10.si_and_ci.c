
/*
t=time
p=principal amount
r=rate 
si=simple interest= p*r*t
ci=compound interest=p(1+r/100)

*/
#include<stdio.h>
#include<math.h>
int main()
{float r,si,ci;
int t,p;
printf("please input time , interest (as respective to time),and principle amount\n");
scanf("%d %f %d\n ",&t,&r,&p);
si= p*r*t;
ci=p*pow((1+r/100),t);
printf("simple and compound interesr are %f and %f",si,ci);
    
    return 0;}