#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int AAAAAAAA;
   int AAAAAAA2;
   int BBBBBBBB;
   int XXXXXXXX;
   int CCCCCCC1;
   int CCCCCCC2;
   printf("Enter AAAAAAAA:");
   scanf("%d", &AAAAAAAA);
   printf("Enter BBBBBBBB:");
   scanf("%d", &BBBBBBBB);
   for (int AAAAAAA2 = AAAAAAAA; AAAAAAA2 <= BBBBBBBB; AAAAAAA2++)
   printf("%d\n", (AAAAAAA2 * AAAAAAA2));
   for (int AAAAAAA2 = BBBBBBBB; AAAAAAA2 <= AAAAAAAA; AAAAAAA2++)
   printf("%d\n", (AAAAAAA2 * AAAAAAA2));
   XXXXXXXX = 0;
   CCCCCCC1 = 0;
   while (CCCCCCC1 <= AAAAAAAA)
   {
   {
   CCCCCCC2 = 0;
   while (CCCCCCC2 <= BBBBBBBB)
   {
   {
   XXXXXXXX = (XXXXXXXX + 1);
   CCCCCCC2 = (CCCCCCC2 + 1);
   }
   }
   CCCCCCC1 = (CCCCCCC1 + 1);
   }
   }
   printf("%d\n", XXXXXXXX);
   XXXXXXXX = 0;
   CCCCCCC1 = 1;
   do
   {
   CCCCCCC2 = 1;
   do
   {
   XXXXXXXX = (XXXXXXXX + 1);
   CCCCCCC2 = (CCCCCCC2 + 1);
   }
   while (!(CCCCCCC2 >= BBBBBBBB));
   CCCCCCC1 = (CCCCCCC1 + 1);
   }
   while (!(CCCCCCC1 >= AAAAAAAA));
   printf("%d\n", XXXXXXXX);
   system("pause");
    return 0;
}
