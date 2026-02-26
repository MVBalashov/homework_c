#include <stdio.h>

int main(int argc, char **argv)
{
    int cnt = 0;
    int num = 0;

    while (1){

        scanf("%d", &num);
        
        if (num == 0){
            break;
        }

        if(num % 2 == 0){
            cnt++;
        }           
        
    }

    printf("%d", cnt);
    return 0;
}
