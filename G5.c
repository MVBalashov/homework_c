#include <stdio.h>

int main() {
    FILE *fin  = fopen("input.txt",  "r");
    FILE *fout = fopen("output.txt", "w");

    int c;
    while ((c = fgetc(fin)) != EOF) {
        if      (c == 'a') c = 'b';
        else if (c == 'b') c = 'a';
        else if (c == 'A') c = 'B';
        else if (c == 'B') c = 'A';
        fputc(c, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
