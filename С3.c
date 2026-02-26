#include <stdio.h>

int average();

int average(int n, int m){
    int tmp = (n + m) / 2;
    // for(int i =0; i < p; i++){
    //     tmp *= n;
    // }
    return tmp;
       
}

int main() {

    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);   
    int result = average(a, b);
    printf("%d", result);

    return 0;
}