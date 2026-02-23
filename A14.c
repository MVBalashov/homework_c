#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;

	
	int hundred = 0;
	int dec = 0;
	int numb = 0;
	int max = 0;
	
	scanf("%d", &a);
	
	hundred = a / 100;
	dec = (a /10) % 10;
	numb = a % 10;
	max = hundred;
	if(dec > max) max = dec;
	if(numb > max) max = numb;
	
	printf("%d \n", max );
	
	
	//printf("%d + %d + %d", hundred, dec, numb);
	return 0;
}
