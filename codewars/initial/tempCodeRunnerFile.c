void count_by(unsigned x, unsigned n, unsigned result[n]) {
    int i = 0;
    int j = 0;
    while (i < n) {
        result[i] = x * (i + 1);
        i++;
    }

    while (j < n) {
        printf("%u ", result[j]);
        j++;
    }

}