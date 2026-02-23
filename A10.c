#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	
	int min = 0;
	int max = 0;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	if (e < min) min = e;
	printf("%d", min);
	return 0;
}

