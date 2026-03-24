#include <stdio.h>

int main() {
    FILE *fin  = fopen("input.txt",  "r");
    FILE *fout = fopen("output.txt", "w");

    int n;
    fscanf(fin, "%d", &n);

   
    int letter = 0;  // A + letter
    int digit  = 2;  // 2,4,6,8

    for (int pos = 1; pos <= n; pos++) {
        if (pos % 2 != 0)
            fputc('A' + letter++, fout);
        else {
            fputc('0' + digit, fout);
            digit = (digit % 8) + 2;
        }
    }
    fputc('\n', fout);

    fclose(fin);
    fclose(fout);
    return 0;
}
