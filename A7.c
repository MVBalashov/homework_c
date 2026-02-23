#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	scanf("%d %d %d", &a, &b);
	int max = (a > b) ? a : b; // условие ? значение_если_истина : значение_если_ложь;
	int min = (a > b) ? b : a;
	printf("%d %d", min, max);
	return 0;
}

