#include <stdio.h>

int mult_sum(int n){
    int result = 0;
    int tmp = 0;
    int sum = 0;
    int mul = 1;

    while(n != 0)
    {
        tmp = n % 10;
        sum += tmp;
        mul *= tmp;
        if (sum == mul)
            result = 1;
        else result = 0;
        n = n / 10;
        // printf("%d ", tmp);
    }

    return result;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int result = mult_sum(n);
    if (result == 1) printf("YES");
    else printf("NO");
    return 0;
}