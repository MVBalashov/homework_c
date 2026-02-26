#include <stdio.h>

int func();

int func(int n){

    int tmp = 0;
    
    if (-2 <= n && n < 2){
        tmp = n * n;
    }
    if (n >= 2){
        tmp = (n * n) + 4 * n + 5;
    }
    if (n < -2){
        tmp = 4;
    } 
   
    return tmp;
}

int main() {

    int a = 0;
    int result = 0;
    int max = 0;
    // int b = 0;
    while (1){

        scanf("%d", &a);
        
        if (a == 0){
            break;
        }

        result = func(a); 

        if(result > max) max = result;
    }  
    // int result = func(a);
    printf("%d", max);

    return 0;
}