#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    printf("Sum of how many naural numbers: ");
    scanf_s("%d",&n);
    
    for (int i = 1, j=n; i <= n, j>=1; i++, j--) {
        sum = i+sum;
        printf("%d\n", j);
    }
    printf("%d",sum);

    return 0;
}