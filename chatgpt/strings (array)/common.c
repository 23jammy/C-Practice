#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **get_common(char *arr1[], char *arr2[], int size1, int size2) {
    int max_s = size1 + size2;
    char **common = (char **)malloc(max_s * sizeof(char *));

    int k = 0;
    for (int i=0; i < size1; i++) {
        int flag = 0;
        for (int j=0; j < size2; j++) {
            if (strcmp(arr1[i], arr2[j]) == 0 && flag != 1) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            common[k++] = arr1[i];
        }
    }

    common[k] = NULL;

    return common;
}

int main () {
    char *arr1[] = {"apple", "banana", "sugar"};
    char *arr2[] = {"apple", "cherry", "sugar", "grapes"};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    char **common = get_common(arr1, arr2, size1, size2);
    printf("Common: ");

    int n = sizeof(common)/sizeof(common[0]);

    for (int i=0; common[i] != NULL; i++) {
        printf("%s ", common[i]);
    }

    free(common);
    return 0;
}
