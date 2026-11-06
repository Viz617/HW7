#include <stdio.h>
#include <ctype.h>

int main(void)
{
int c, k = 0, b = 0, sum = 0, res = 0;
while ((c=getchar()) != EOF){
    ++res;

    if (c == b){
        ++k;
    } else {
        if (k >= 3){sum++;}
        k = 1;
        b = c;
    }
}
if (k >= 3){sum++;}
printf("%d\n%d\n",sum,res);
return 0;
}