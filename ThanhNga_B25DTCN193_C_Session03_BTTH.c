#include <stdio.h>
#include <math.h>

int main() {
    double a, b, S;
    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);

    S = sqrt(a * a + b * b) / (a + b) + (sqrt(a) + sqrt(b)) / (a * b);

    printf("S = %.2lf\n", S);
    return 0;
}
