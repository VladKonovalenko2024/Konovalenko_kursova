#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int AAAAAAAA;
   int BBBBBBBB;
   int CCCCCCCC;
   printf("Enter AAAAAAAA:");
   scanf("%d", &AAAAAAAA);
   printf("Enter BBBBBBBB:");
   scanf("%d", &BBBBBBBB);
   printf("Enter CCCCCCCC:");
   scanf("%d", &CCCCCCCC);
   if (AAAAAAAA >= BBBBBBBB) 
   {
   if (AAAAAAAA >= CCCCCCCC) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", CCCCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", AAAAAAAA);
   goto Outofif;
   }
   }
   if (BBBBBBBB <= CCCCCCCC) 
   {
   printf("%d\n", CCCCCCCC);
   }
   else
   {
   printf("%d\n", BBBBBBBB);
   }
Outofif:
   if (((AAAAAAAA == BBBBBBBB && AAAAAAAA == CCCCCCCC) && BBBBBBBB == CCCCCCCC)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((AAAAAAAA <= 0 || BBBBBBBB <= 0) || CCCCCCCC <= 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(AAAAAAAA <= (BBBBBBBB + CCCCCCCC))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
