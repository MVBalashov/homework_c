#include <stdio.h>
#include <string.h>

void count_digits(char s[], int cnt[]) {
    for (int i = 0; i < 10; i++)
        cnt[i] = 0;
    for (int i = 0; s[i] != '\0'; i++)
        cnt[s[i] - '0']++;
}

int main() {
    char s[1001];
    scanf("%s", s);

    int cnt[10];
    count_digits(s, cnt);

    for (int d = 0; d <= 9; d++)
        if (cnt[d] > 0)
            printf("%d %d\n", d, cnt[d]);

    return 0;
}
