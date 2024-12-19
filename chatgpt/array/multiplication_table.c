#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1;
    int n2 = 10;
    printf("Enter the number range you wish to multiply: ");
    scanf("%d", &n1);
    
    int arr[n1][n2];

    for (int i = 0; i < n1; i ++) {
        int cur_n = i+1;

        for (int j = 0; j < n2; j++) {
            int num = cur_n * (j + 1);
            arr[i][j] = num;
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
