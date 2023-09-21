//                                gcc mainfile.c -o _mainfile

#include <stdio.h>
#include <stdlib.h>

void int_displayNumbers(int _arr[][3], int n, int _n){
     for (int i = 0; i<n; i++){
         printf("\n");
         for (int j = 0; j<_n; j++){
               printf("\n%d",_arr[i][j]);
         }
     }
}

int main() {
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int_displayNumbers(arr, 4, 3);
    return 0;
}
