#include <stdio.h>

int main() {
    int n;
    printf("Enter the number range you wish to display for even numbers: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for (int i=0; i < n; i+=2) {
        printf("\t%d", i);
    }

    return 0;
}   
