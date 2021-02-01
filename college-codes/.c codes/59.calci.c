#include<stdio.h>
int main()
{
  int a,b,c;
  char ch;
  again:
  printf("\nEnter value of a and b\n");
  scanf("%d %d",&a,&b);
  
  printf("Enter choice of operation\n");
  scanf(" %c",&ch);
  switch(ch)
  {
     case '+':
            c=a+b;
            printf("value of %d %c %d is= %d",a,ch,b,c);
            break;
     case '-':
            c=a-b;
            printf("value of %d %c %d is= %d",a,ch,b,c);
            break;
     case '*':
            c=a*b;
            printf("value of %d %c %d is= %d",a,ch,b,c);
            break;
     case '/':
            c=a%b;
            printf("value of %d %c %d remainder is= %d",a,ch,b,c);
            break;
       

     default:
             printf("invalid plase try again ");
             goto again;
             break;
  }
return 0;
}