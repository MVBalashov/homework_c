//2+2 = 2*2
#include <stdio.h>

int main(int argc, char **argv)
{
    int cnt = 0;
    int a = 0;
    int sum = 0;
    int mul = 1;
    // int i = 10;

    scanf("%d", &a);   
        
    for(int i = 10; i < a; i++){
        int tmp = i;
        sum = 0;
        mul = 1;

        while (tmp > 0){
            int digit = tmp % 10;
            // printf( "%d ", digit);
            sum += digit;
            mul *= digit;
            // printf("sum %d mul %d \n", sum, mul);
            tmp /=10;
        }

        if (sum == mul){
            printf("%d \n", i);
        }
    }  
   
    // printf("Not while sum %d mul %d \n", sum, mul);

    return 0;
}
