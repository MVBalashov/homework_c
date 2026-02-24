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
    int result = 0;
    while (divisor > 0) {
        int digit = temp / divisor;     
        // printf("%d ", digit);           
        temp %= divisor;                 
        divisor /= 10;
        result = digit + result;               
    }

    printf("%d \n", result);   
    return 0;
}