#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF ){
        if (isalpha(c)){
            if (c == 'z'){
                char next = 'a';
                putchar(next);
            } else  if( c == 'Z'){
                char next = 'A';
                putchar(next);
            } else {
                char next = c + 1;
                putchar(next);
            }
        } else {
            putchar(c);
        }
    }
    return 0;
}