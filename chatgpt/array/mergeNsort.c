#include <stdio.h>
#include <stdlib.h>

int *merge_arr(int arr1[], int arr2[], int size_arr1, int size_arr2) {
    int n = size_arr1 + size_arr2;
    int *merged_arr = (int *)malloc(n * sizeof(int));

    int j = 0;

    for (int i=0; i < size_arr1; i++) {
        merged_arr[j] = arr1[i];
        j++;
    }

    for (int i=0; i < size_arr2; i++) {
        merged_arr[j] = arr2[i];
        j++;
    }

    return merged_arr;
}


int *sort_arr(int arr[], int size) {
    int *sorted_arr = (int *)malloc(size *sizeof(int));

    for (int i=0; i < size; i++) {
        sorted_arr[i] = arr[i];
    }

    for (int i=0; i < size; i++) {
        int cur_i = i;
        for (int j=i; j < size; j++) {
            if (sorted_arr[j] < sorted_arr[cur_i]) {
                cur_i = j;
            }
        }
        int temp_e = sorted_arr[cur_i];
        sorted_arr[cur_i] = sorted_arr[i];
        sorted_arr[i] = temp_e;
    }

    return sorted_arr;
}

int main () {
    int arr1[] = {5, 2, 1, 7, 8, 9};
    int arr2[] = {20, 4, 0, 6, 10};
    int size_1 = sizeof(arr1)/sizeof(arr1[0]);
    int size_2 = sizeof(arr2)/sizeof(arr2[0]);
    int size = size_1 + size_2;

    int *merged_arr = merge_arr(arr1, arr2, size_1, size_2);
    int *sorted_arr = sort_arr(merged_arr, size);

    printf("Merged arr: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", merged_arr[i]);
    }
    free(merged_arr);

    printf("\nSorted arr: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sorted_arr[i]);
    }
    free(sorted_arr);
}
