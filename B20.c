#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 0;
    int flag = 0;

    scanf("%d", &a);   
    
    if (a < 2){
        flag = 1;
    }
    
    for(int i = 2; i * i <= a; i++){
        if (a % i == 0){
            flag = 1;
            break;
        }
        // printf("%d ", tmp);
    }

    
    if (flag == 1){
        printf("NO");
    }

    else printf("YES");

    return 0;
}
