//                                                            gcc mainfile.c -o _mainfile

#include <stdio.h>

int main(){
    // PRECISION SPECIFIER

    float L = 26.3126;
    printf("value of variable L is: %.2f",L); // IT WILL PRINT 26.31 BECAUSE OF THE PRECISION SPECIFIER

    
    // WIDTH SPECIFIER

    printf("\n\n");
    printf("%10s %10s\n", "Name:", "Age:");
    printf("%10s %10d\n", "Alice", 25);
    printf("%10s %10d\n", "Bob", 30);
    printf("\n\n");
    
    printf("%9s %9s\n", "Name:", "ID:");
    printf("%9s %9d\n", "Mlbb", 900);
    printf("%9s %9d\n", "NsLpal", 75000);
    printf("\n\n");
    return 0;
}
