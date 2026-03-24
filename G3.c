#include <stdio.h>
#include <string.h>

int main() {
    FILE *fin  = fopen("input.txt",  "r");
    FILE *fout = fopen("output.txt", "w");

    char s[1001];
    fgets(s, sizeof(s), fin);

    int len = strlen(s);
    while (len > 0 && (s[len-1] == '\n' || s[len-1] == '\r'))
        s[--len] = '\0';

    char last = s[len - 1];
    int first = 1;
    for (int i = 0; i < len - 1; i++) {
        if (s[i] == last) {
            if (!first) fprintf(fout, " ");
            fprintf(fout, "%d", i);
            first = 0;
        }
    }
    fprintf(fout, "\n");

    fclose(fin);
    fclose(fout);
    return 0;
}
