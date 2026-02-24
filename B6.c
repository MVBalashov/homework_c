#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
    int divisor = 1;
    int temp;

	scanf("%d", &a);
    temp = a;

    while (temp >= 10){
        divisor *= 10;
        temp /= 10;
    }

    temp = a;  
    int old = -1;
    int flag = 0;

    while (divisor > 0) {
        int digit = temp / divisor;               
        temp %= divisor;                 
        divisor /= 10; 

        if (old != -1 && old == digit) {
            flag = 1;
        }
        old = digit;            
    }

    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    // printf("Result = %d \n", result);   
    return 0;
}