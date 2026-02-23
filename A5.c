#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	float av = 0;
	//scanf("%d %d %d", &a, &b, &c);
	av = (a + b + c) / 3.0;
	printf("%.2f", av);
	//printf("%d+%d+%d=%.2f\n", a, b, c, av);
	return 0;
}
