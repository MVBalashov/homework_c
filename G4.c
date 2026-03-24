#include <stdio.h>

int main() {
    FILE *fin  = fopen("input.txt",  "r");
    FILE *fout = fopen("output.txt", "w");

    char a[101], b[101];
    fscanf(fin, "%s %s", a, b);

    int ca[26] = {0}, cb[26] = {0};
    for (int i = 0; a[i]; i++) ca[a[i] - 'a']++;
    for (int i = 0; b[i]; i++) cb[b[i] - 'a']++;

    int first = 1;
    for (int i = 0; i < 26; i++) {
        if (ca[i] == 1 && cb[i] == 1) {
            if (!first) fprintf(fout, " ");
            fprintf(fout, "%c", 'a' + i);
            first = 0;
        }
    }
    fprintf(fout, "\n");

    fclose(fin);
    fclose(fout);
    return 0;
}
