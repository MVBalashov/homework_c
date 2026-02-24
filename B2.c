#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
    int b = 0;
	int i = 0;

	scanf("%d %d", &a, &b);
	printf("\n\n\n");
	for(i = a; i <= b; i++)
		printf("%d ", i * i);

	
	return 0;
}
