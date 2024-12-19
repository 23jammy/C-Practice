#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **get_unique(char *arr1[], char *arr2[], int size1, int size2) {
    int max_s = size1 + size2;
    char **unique_arr = (char **)malloc(max_s *sizeof(char *));

    int k = 0;
    for (int i=0; i < size1; i++) {
        int flag = 0;
        for (int j = 0; j < size2; j++) {
            if (strcmp(arr1[i], arr2[j]) == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            unique_arr[k] = arr1[i];
            k++;
        }
    }

    for (int i=0; i < size2; i++) {
        int flag = 0;
        for (int j = 0; j < size1; j++) {
            if (strcmp(arr2[i], arr1[j]) == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            unique_arr[k] = arr2[i];
            k++;
        }
    }

    unique_arr[k] = NULL;

    return unique_arr;
}

int main () {
    char *arr1[] = {"apple", "sugar", "cherry", "grapes"};
    char *arr2[] = {"apple", "grapes", "cherry", "orange"};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    char **unique_arr = get_unique(arr1, arr2, size1, size2);

    printf("Unique elements: ");
    for (int i=0; unique_arr[i] != NULL; i++) {
        printf("%s ", unique_arr[i]);
    }

    free(unique_arr);

    return 0;
}
