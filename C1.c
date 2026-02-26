#include <stdio.h>

void fabs_1();

void fabs_1(int x){
    if (x < 0){
        x *= -1;
    }

    printf("%d", x);
}

int main() {

    int a = 0;
    scanf("%d", &a);   
    fabs_1(a);
    return 0;
}