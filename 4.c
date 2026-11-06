#include <stdio.h>
#include <math.h>

void first(double *a, double *b);
int main(void)
{
    /* При передаче по значению у нас образуется копия и мы работаем с ней
    По указателю мы работаем с оригиналом*/
    double a,b;
    while (scanf("%lf %lf",&a,&b)== 2){
        printf("%.4lf %.4lf\n",a,b);
        first(&a, &b);
        printf("%.4lf %.4lf\n",a,b);

    }
    return 0;
}

void first(double *a, double *b)
{
    *a = round(*a);
    *b = round(*b);
}