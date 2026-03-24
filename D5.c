#include <stdio.h>

void toBinary(int n) {
    if (n >= 2)
        toBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    scanf("%d", &n);
    toBinary(n);
    // printf("\n");
    return 0;
}
