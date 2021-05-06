#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

int fact(int n)
{
    return n > 1 ? n * fact(n - 1) : 1;
}

double sine_series(double x, int n)
{
    double result = 0;

    for (size_t i = 1, j = 0; i <= n; i += 2, ++j)
        result += pow(-1, j) * pow(x, i) / fact(i);

    return result;
}

int main(int argc, char *argv[])
{
    double x = 0; int n = 0;

    printf("\n------ SINE SERIES ------\n");
    printf(" Theta (in radian): "); scanf("%lf", &x);
    printf(" N-th Term: "); scanf("%d", &n);

    printf("\n Series computed value upto %d terms of sin(%g°): %g\n\n", 
        n, 180 * x / PI, sine_series(x, n));

    return 0;
}