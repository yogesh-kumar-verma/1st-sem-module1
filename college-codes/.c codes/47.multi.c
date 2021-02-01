#include<stdio.h>
void multi(int b,int b1);
int main()
{ 
      int a3,a1;
      printf("please inputthe number you want the multiplication table\n ");
       scanf("%d",&a3);
       printf("1.number upto the table \n");
          scanf("%d",&a1);
    
         multi(a3,a1);
      return 0;
}
void multi(int a,int a7)
{
int a2,i;
a2=a;
   
for(i=1;i<=a7;i++)
{    if(i<10) { printf(" %d   multiple   %d  = %d     \n",a2,i,a*i);}
 
      else {printf(" %d   multiple   %d = %d    \n",a2,i,a*i);}


}
return 0;
}