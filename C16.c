#include <stdio.h>

int simple(int n){
    int result = 0;
    int tmp = 2;
    if(n < 2)
    {
        result = 0;
    }
    else
    {
        result = 1;
        for(tmp; tmp * tmp <= n; tmp++)
        {
            if (n % tmp == 0)
            {   
                result = 0;
                break;
            }
            
        }
    }

    return result;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int result = simple(n);
    if (result == 0) printf("NO");
    else printf("YES");
    return 0;
}