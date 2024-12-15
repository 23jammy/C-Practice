#include <stdio.h>

float get_sum (float arr[], int n) {
    float sum;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    } 

    return sum;
}

float get_avg (float arr[], int n) {
    float sum = get_sum(arr, n);
    float avg = sum / n;

    return avg;
}

int main () {
    float num[] = {1, 2, 3, 4, 5};
    int n = sizeof(num)/sizeof(num[0]);
    float sum = get_sum(num, n);
    float avg = get_avg(num, n);

    printf("Sum: %.2f\nAverage: %.2f", sum, avg);

    return 0;
}
