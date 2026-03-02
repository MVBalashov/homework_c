#include <stdio.h>

void print_simple(int n){

    int i = 2;

    while(i <= n )    
    {

        if( n %  i == 0)
        {
            printf("%d ", i);
            n /= i;
        }

        if(n % i != 0 )
        {
                i++;
        }
    } 
}

int main() {

    int n = 0;
    scanf("%d", &n);
    print_simple(n);

    return 0;
}