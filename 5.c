#include <stdio.h>

int rec(int n);
int notrec(int n);
int main(void)
{
    /* Иттеративный подход обычно выполнятьется быстрее и не берет доп. память
    Рекурсивный обычно более короткий, медленый, и может приводить к переполнению памяти
    */
    int n;
    scanf("%d",&n);
    printf("%d\n",rec(n));
    printf("%d\n",notrec(n));
}

int rec(int n)
{
    if (n < 0) return 0;
    if (n <= 1) return 1;
    return n*rec(n-1);
}
int notrec(int n)
{
    int res = 1;
    for (int x = 1;x <= n; x++){
        res *= x;
    }
    return res;
}