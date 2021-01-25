
#include <stdio.h>
int main()
{
     char ch;
      scanf("%c",&ch);
     switch (ch)
     {
         case 'r':
            printf("red ");
            break;
         case 'p':
            printf("pink");
            break;
         case 'y':
            printf("yellow");
            break;
        
         default:
            printf("wrong choise ");
    }
    return 0;
}