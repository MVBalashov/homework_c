#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
    int max = 1;
    int min = 9;

    scanf("%d", &a);
    
    while (a > 0) {
        int digit = a % 10;    //  последяняя цифра справа

        if (max <= digit )
            max = digit;         
        
        if (min >= digit)
            min = digit;           
        
        a = a / 10;  
    }
  printf("%d %d ",  min, max);   

    return 0;
}