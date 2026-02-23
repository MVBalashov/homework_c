#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a+b > c && a+c > b && b+c > a ){
	printf("YES");
	}
	else printf("NO");

	return 0;
}
