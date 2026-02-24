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
    int cnt_noteven = 0;

    while (divisor > 0) {

        int digit = temp / divisor;               
        temp %= divisor;                 
        divisor /= 10; 

        if (digit % 2 != 0){
            cnt_noteven++;
            // printf(" CNT %d ", cnt_noteven);
        }
    }

    if (cnt_noteven <= 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }   
    
    return 0;
}