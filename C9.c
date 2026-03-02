#include <stdio.h>

int factorial(int n){
    
    int result = 1;
    for(int i = 1; i <= n; i++){
       result *= i;
    }
  
    return result;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d", result);
    return 0;
}