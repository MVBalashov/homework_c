// Сравни max и min — если равны, это и есть НОД, выходим из цикла.
// Вычти из большего меньшее: tmp = max - min.
// Заново определи, кто max, а кто min — сравни tmp и min, больший стань новым max, меньший — новым min.


#include <stdio.h>

int nod(int n, int m){

    int max = 0;
    int min = 0;
    int result = 0;

    if (m > n){
        max = m;
        min = n;
    }
    else {
        max = n;
        min = m;
    }
    
    int tmp = 0;

    while(max != min){

        tmp = max - min;

        if (tmp > min)
        {
            max = tmp;
            min = min;
        }

        else 
        {
            max = min;
            min = tmp;
        }
        result = max;    
    }
    
    return result;      
    }


int main() {

    int n = 0;
    int m = 0;

    scanf("%d %d", &n, &m);
    int result = nod(n, m);
    printf("%d", result);


    return 0;
}