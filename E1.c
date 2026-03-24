#include <stdio.h>

int main() {
    int a[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += a[i];

    printf("%.2f\n", (double)sum / 5);
    return 0;
}
