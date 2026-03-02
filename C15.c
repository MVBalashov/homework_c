#include <stdio.h>

int LogicF(int n){

    int tmp = 0;
    int min = -1;
    int flag = 0;
    int result = 0;

    while(n > 0){
        result = result * 10 + (n % 10);
        // printf("%d \n", result);
        n /= 10;
    }

    while(result > 0){
        tmp = result % 10;
        // printf("tmp %d \n", tmp);

        if(tmp < min || tmp == min){
            flag = 1;
            break;
        }
        min = tmp;
        result /= 10;
    }

    return flag;
    

}


int main() {
    int n = 0;
    scanf("%d", &n);
    int result = LogicF(n);
    if (result == 0) printf("YES");
    else printf("NO");
    return 0;
}