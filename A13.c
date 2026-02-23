#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;

	
	int hundred = 0;
	int dec = 0;
	int numb = 0;
	
	scanf("%d", &a);
	
	hundred = a / 100;
	dec = (a /10) % 10;
	numb = a % 10;
	
	printf("%d \n", hundred * dec * numb );
	
	
	//printf("%d + %d + %d", hundred, dec, numb);
	return 0;
}
