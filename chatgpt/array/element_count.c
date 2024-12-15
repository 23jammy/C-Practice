#include <stdio.h>
#include <stdlib.h>

int get_count(int arr[], int size, int n) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            count++;
        }
    }

    return count;
}

int main () {
    int arr[100];
    int n, num, count;
    printf("Enter how many numbers you wish to enter: ");
    scanf("%d", &n);
    printf("Enter the numbers of the list: ");
    for (int i=0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you wish to count: ");
    scanf("%d", &num);

    count = get_count(arr, n, num);
    printf("Element count of %d: %d", num, count);
}
