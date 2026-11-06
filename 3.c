#include <stdio.h>
#include <math.h>

double first(double x, double y);

int main(void)
{
    double x,y;
    while (scanf("%lf %lf", &x, &y) == 2){
        printf("%.4lf\n",first(x,y));
    }
    return 0;
}
double first(double x, double y)
{
    return pow(x,y);
}