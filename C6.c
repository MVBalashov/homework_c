// bₙ = b₁ · q^(n-1) = 1 · 2^(n-1) = 2^(n-1)

// bₙ — текущий член прогрессии;
// q — знаменатель прогрессии.
#include <stdio.h>

unsigned long long Geometric_progression(int n){

    int tmp = 0;
    unsigned long long b1 = 1;
    
    int q = 2; 

    for(int i = 0; i < n - 1; i++){
        b1 = b1 * q;
        // printf("I = %d, n = %d, b1 = %d \n", i, n, b1);

    }
   
    return b1;
}

int main() {

    int a = 0;

    scanf("%d", &a);

    unsigned long long result = Geometric_progression(a);
    printf("%llu", result);

    return 0;
}