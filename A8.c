#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b) ? a : b; 
	max = (c > max) ? c : max;
	printf("%d", max);
	return 0;
}
