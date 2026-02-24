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
    int target = 9;
    int flag = 0;
    int cnt_nine = 0;

    while (divisor > 0) {
        int digit = temp / divisor;               
        temp %= divisor;                 
        divisor /= 10; 

        if (digit == target){
            cnt_nine += 1;
            flag = 1;
        }

        if (cnt_nine >= 2){
            flag = 0;
        }        
    }

    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }   
    return 0;
}