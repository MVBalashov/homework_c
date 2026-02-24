#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;

	scanf("%d", &a);

    if (a > 999){
        printf("NO \n");
    }
    else printf("YES \n");
	return 0;
}