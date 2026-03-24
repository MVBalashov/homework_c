#include <stdio.h>

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    int min = a[0], max = a[0];
    int imin = 0, imax = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] < min) { min = a[i]; imin = i; }
        if (a[i] > max) { max = a[i]; imax = i; }
    }

    printf("%d %d %d %d\n", imax + 1, max, imin + 1, min);
    return 0;
}
