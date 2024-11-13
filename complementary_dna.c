#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include <stdio.h>

char *dna_strand(const char *dna) {
    int len = strlen(dna);
    char *result = (char*) malloc(len + 1);
    if (len > 0) {
        int i = 0;
        while (i < len) {
            if (toupper(dna[i]) == 'T') {
                result[i] = 'A';
            } else if (toupper(dna[i]) == 'A') {
                result[i] = 'T';
            } else if (toupper(dna[i]) == 'C') {
                result[i] = 'G';
            } else if (toupper(dna[i]) == 'G') {
                result[i] = 'C';
            } else {
                return "Invalid input.";
            }
            i += 1;
        }
        result[len] = '\0';
        return result;
    }
    return NULL;
}

int main() {
    char dna1[] = "ATTGC";
    char *res1 = dna_strand(dna1);
    printf("%s ---> %s", dna1, res1);

    free(res1);
}