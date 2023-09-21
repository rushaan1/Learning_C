#include <stdio.h>
#include <stdlib.h>


int main() {
    int arr[] = {5,45,0,5,10};
  
    printf("%d", sizeof(arr) / sizeof(arr[0]));
  
    return 0;
}
