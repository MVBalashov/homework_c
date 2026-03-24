#include <stdio.h>
#include <string.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    char s[101];
    fgets(s, sizeof(s), fin);

    int len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r'))
        s[--len] = '\0';

    fprintf(fout, "%s, %s, %s %d\n", s, s, s, len);

    fclose(fin);
    fclose(fout);
    return 0;
}
