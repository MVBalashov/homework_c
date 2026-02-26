//fibbonachi F(n) = F(n-1) + F(n-2)
#include <stdio.h>

int main(int argc, char **argv)
{

    int a = 0;
    int a_n_1 = 0;  // F(n-1)
    int a_n_2 = 1; // F(n-2),

    int next = 0;

    // int i = 10;

    scanf("%d", &a);   
     
    for(int i = 0; i < a; i++){
        next = a_n_1 + a_n_2;
        a_n_2 = a_n_1 ;
        a_n_1 = next;
        printf(" %d \n", next);
    }
    
    // printf(" %d \n", next);
    return 0;
}
