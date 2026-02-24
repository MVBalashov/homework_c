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
    int old[10] = {0};  // Заполнил 0
    int flag = 0;
    int cnt = 0;
    while (divisor > 0) {
        int digit = temp / divisor;               
        temp %= divisor;                 
        divisor /= 10; 
        cnt++;
        // printf("cnt = %d :: old[digit] == %d \n", cnt, old[digit]);

        if (old[digit] == 1){
            flag = 1;
        }
        old[digit] = 1;  
        // printf("%d", old[digit]);
  
    }

    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    // printf("Result = %d \n", result);   
    return 0;
}