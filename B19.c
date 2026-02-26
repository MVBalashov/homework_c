//fibbonachi F(n) = F(n-1) + F(n-2)
#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 0;
    int cnt = 0;

    scanf("%d", &a);   
     
    while (a > 0){
        int digit = a % 10;
        cnt += digit;       
        a /= 10;
    }

    if (cnt == 10){
        printf("YES");
    }
    else printf("NO");

    return 0;
}
