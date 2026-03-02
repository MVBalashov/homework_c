#include <stdio.h>

void GetChar(){
    char  c;
    while ((c = getchar()) != '.') {
        if (c >= 'a' && c <= 'z'){
            c = c - 32;
        }       
        putchar(c);
    }
}

int main() {
    GetChar();
    return 0;
}