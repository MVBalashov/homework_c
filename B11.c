#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
    int reversed = 0;

    scanf("%d", &a);
    
    while (a > 0) {
        int digit = a % 10;    //  последяняя цифра справа
        reversed = reversed * 10  + digit;  
        a = a / 10;  
    }
  printf("%d ", reversed);   

    return 0;
}