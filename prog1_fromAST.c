#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int AAAAAAAA;
   int BBBBBBBB;
   int XXXXXXXX;
   int YYYYYYYY;
   printf("Enter AAAAAAAA:");
   scanf("%d", &AAAAAAAA);
   printf("Enter BBBBBBBB:");
   scanf("%d", &BBBBBBBB);
   printf("%d\n", (AAAAAAAA + BBBBBBBB));
   printf("%d\n", (AAAAAAAA - BBBBBBBB));
   printf("%d\n", (AAAAAAAA * BBBBBBBB));
   printf("%d\n", (AAAAAAAA / BBBBBBBB));
   printf("%d\n", (AAAAAAAA % BBBBBBBB));
   XXXXXXXX = (((AAAAAAAA - BBBBBBBB) * 10) + ((AAAAAAAA + BBBBBBBB) / 10));
   YYYYYYYY = (XXXXXXXX + (XXXXXXXX % 10));
   printf("%d\n", XXXXXXXX);
   printf("%d\n", YYYYYYYY);
   system("pause");
    return 0;
}
