#include <stdio.h>

void printDigits(int n) {
    printf("%d\n", n % 10);
    if (n >= 10)
        printDigits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printDigits(n);
    return 0;
}
