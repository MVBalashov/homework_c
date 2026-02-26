#include <stdio.h>

int power_np();

int power_np(int n, int p){
    int tmp = 1;
    for(int i =0; i < p; i++){
        tmp *= n;
    }
    return tmp;
       
}

int main() {

    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);   
    int result = power_np(a, b);
    printf("%d", result);

    return 0;
}