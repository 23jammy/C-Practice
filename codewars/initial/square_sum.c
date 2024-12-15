#include <stddef.h>
#include <stdio.h>

int square_sum(const int values[/* count */], size_t count) {
    if (count) {
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += values[i]*values[i];
        }
        return sum;
    }
	return 0;
}

int main() {
    int num[] = {4, 5, 2};
    int n = sizeof(num)/sizeof(num[0]);
    printf("Result: %d", square_sum(num, n));
}