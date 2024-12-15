#include <stdio.h>

float get_min(float arr[], int n) {
    float min = arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

float get_max(float arr[], int n) {
    float max = arr[0];
    for (int i; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main () {
    float arr[] = {2, 3.5, -6.5, 7.1, 0, -2};
    int n = sizeof(arr)/sizeof(arr[0]);
    float min = get_min(arr, n);   
    float max = get_max(arr, n);

    printf("Min: %f\nMax: %f", min, max);
}
