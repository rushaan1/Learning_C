//                                gcc mainfile.c -o _mainfile

#include <stdio.h>

void test_static(){
   static int counter = 0;
   printf("%d\n",++counter);
}

void test_auto(){
   auto int counter = 0;
   printf("%d\n",++counter);
}

int main() {
    test_static();
    test_static();
    test_static();
    test_static();

    test_auto();
    test_auto();
    test_auto();
    test_auto();
    return 0;
}
