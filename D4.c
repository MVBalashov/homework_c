#include <stdio.h>

void printDigits(int n) {
    if (n >= 10)
        printDigits(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printDigits(n);
    return 0;
}
