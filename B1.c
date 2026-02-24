#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	int i = 0;

	scanf("%d", &a);
	
	for(i = 1; i <= a; i++)
		printf("%d %d %d \n", i, i * i, i * i * i);

	
	return 0;
}

