#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
    int b = 0;
	int i = 0;
    int result = 0;

	scanf("%d %d", &a, &b);

	for(i = a; i <= b; i++){
        result += i * i;
    }    
    printf("%d ", result);
	return 0;
}