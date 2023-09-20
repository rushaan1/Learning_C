//                                gcc mainfile.c -o _mainfile

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <arg1> <arg2>\n", argv[0]);
        return 1; // Exit the program with an error code
    }
    
   // argv[0] LIKELY CONTAINS THE PATH OF THIS C FILE 

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;

    printf("Sum of %d and %d is %d",num1,num2,sum);

    return 0; // Exit the program successfully
}
