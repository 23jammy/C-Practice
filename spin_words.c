#include <stdio.h>
#include <string.h>

void spin_words(const char *sentence, char *result) {
    int n = strlen(sentence);

    char string[100] = "";
    int j = 0;
    for (int i = 0; i <= n; i ++) {
        if (sentence[i] != '\0' && sentence[i] != ' ') {
            string[j] = sentence[i];
            j++;
        } else {

            if (j >= 5) {
                char new_string[100] = "";
                for (int k = 0; k <= j/2; k++) {
                    char a = string[k];
                    char b = string[j - k - 1];
                    new_string[k] = b;
                    new_string[j - k - 1] = a;
                }                
                new_string[j] = '\0';

                int z = 0;
                for (int y = i - j; y < i; y++) {
                    result[y] = new_string[z];
                    z++;
                }
            } else {
                int z = 0;
                for (int y = i - j; y < i; y++) {
                    result[y] = string[z];
                    z++;
                }
            }
            
            string[0] = '\0';
            j = 0;

            if (sentence[i] == ' ') {
                result[i] = ' ';
            }
        }
        result[n] = '\0';
    }
}

int main() {
    char sentence[] = "Welcome";
    char result[strlen(sentence) + 1];
    spin_words(sentence, result);
    printf("\n%s ======> %s", sentence, result);
}