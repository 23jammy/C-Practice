#include <stdio.h>
#include <stdlib.h>

int *reverse_arr(int arr[], int size) {
    int *reversed = (int *)malloc(size * sizeof(int));
    int j = 0;
    for (int i=size-1; i >= 0; i--) {
        reversed[j] = arr[i];
        j++;
    }

    return reversed;
}

int main () {
    int num[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(num) / sizeof(num[0]);

    int *reversed_num = reverse_arr(num, n);
    printf("Reversed arr: ");

    for (int i=0; i < n; i++) {
        printf("%d ", reversed_num[i]);
    }

    free(reversed_num);

    return 0;
}
