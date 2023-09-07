#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    printf("Sum of how many naural numbers: ");
    scanf_s("%d",&n);
    int container_for_n_reverse = n;
    for (int i = 1; i <= n; i++) {
        sum = i+sum;
        printf("%d\n", container_for_n_reverse--);
    }
    printf("%d",sum);

    return 0;
}