#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t AAAAAAAA, BBBBBBBB, XXXXXXXX, YYYYYYYY;
   printf("Enter AAAAAAAA:");
   scanf("%hd", &AAAAAAAA);
   printf("Enter BBBBBBBB:");
   scanf("%hd", &BBBBBBBB);
   printf("%d\n", AAAAAAAA + BBBBBBBB);
   printf("%d\n", AAAAAAAA - BBBBBBBB);
   printf("%d\n", AAAAAAAA * BBBBBBBB);
   printf("%d\n", AAAAAAAA / BBBBBBBB);
   printf("%d\n", AAAAAAAA % BBBBBBBB);
   XXXXXXXX = (AAAAAAAA - BBBBBBBB) * 10 + (AAAAAAAA + BBBBBBBB) / 10;
   YYYYYYYY = XXXXXXXX + (XXXXXXXX % 10);
   printf("%d\n", XXXXXXXX);
   printf("%d\n", YYYYYYYY);
   system("pause");
    return 0;
}
