#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;

    int cnt_chtn = 0;
    int cnt_nechtn = 0;


    scanf("%d", &a);
    
    while (a > 0) {
        int digit = a % 10;    //  последяняя цифра справа
        if (digit % 2 == 0)
        {
            cnt_chtn++;
        }
        else cnt_nechtn++;
        a = a / 10;  
    }
  printf("%d %d ", cnt_chtn, cnt_nechtn);   

    return 0;
}