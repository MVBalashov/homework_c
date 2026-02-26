#include <stdio.h>

int fsum(int n){

    int tmp = 0;
    for(int i = 0; i <= n; i++){
        tmp += i;
    }
   
    return tmp;
}

int main() {

    int a = 0;

    scanf("%d", &a);

    int result = fsum(a);
    printf("%d", result);

    return 0;
}