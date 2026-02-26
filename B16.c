//NOD
#include <stdio.h>

int main(int argc, char **argv)
{
    int cnt = 0;
    int num1 = 0;
    int num2 = 0;
    int ost = 0;

    scanf("%d %d", &num1, &num2);

    int max = num1;
    int min = num1;
    
    // Max
    if (num1 > num2) max = num1;
    if (num1 < num2) max = num2;
    
    // Min
    if (num1 > num2) min = num2;
    if (num1 < num2) min = num1;

    // printf("%d %d", max, min);
  
    while (min != 0){

        ost = max % min;
        max = min;
        min = ost;
    }

    printf("%d", max);
    return 0;
}
