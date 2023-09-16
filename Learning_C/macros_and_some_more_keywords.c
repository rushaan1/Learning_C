//                                                            gcc mainfile.c -o _mainfile

#include <stdio.h>
#define VALUE 50
#define MULTIPLY_BY_5(n) (n * 5)

int main() {
   const a = 15;
   auto b = 'M';
   printf("%d\n%c",a,b);

   int c = 2147483647;
   printf("\n%d",c);

   int d = VALUE;
   printf("\n%d",d);
   printf("\n%d",VALUE);
   printf("\nMultiplying 7 by 5 using macro: %d", MULTIPLY_BY_5(7));
   return 0;
}
