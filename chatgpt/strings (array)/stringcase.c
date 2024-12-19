#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char **to_upper(char *arr[], int size) {
    char **new_arr = (char **)malloc(size * sizeof(char *));
    for (int i=0; i < size; i++) {
        int n = strlen(arr[i]);
        char *new_str = (char *)malloc(n * sizeof(char *)); 
        for (int j=0; arr[i][j] != '\0'; j++) {
            new_str[j] = toupper(arr[i][j]);
        }
        new_str[n] = '\0';
        new_arr[i] = new_str;
    }

    new_arr[size] = NULL;

    return new_arr;
}

int main () {
    char *strings[] = {"hello", "girls", "guys"};
    int n = sizeof(strings)/sizeof(strings[0]);

    char **new_strings = to_upper(strings, n);

    printf("Transformed array: ");
    for (int i = 0; new_strings[i] != NULL; i++) {
        printf("%s ", new_strings[i]);
    }

    free(new_strings);
    return 0;
}
