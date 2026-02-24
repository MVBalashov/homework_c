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
    int cnt = 0;
    int old = -1;

    while (divisor > 0) {
        int digit = temp / divisor;               
        temp %= divisor;                 
        divisor /= 10; 

        if (digit <= old){
            printf("NO");
            return 0;
        }
        old = digit; 

    }
    printf("YES"); 
    
    return 0;
}