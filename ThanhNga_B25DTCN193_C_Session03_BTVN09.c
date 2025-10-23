#include <stdio.h>

int main() {
    double n, A;
    printf("Nhap n (>1): ");
    scanf("%lf", &n);

    A = 1.0 / ((n - 1) * n) + 1.0 / (n * (n + 1)) + 1.0 / ((n + 1) * (n + 2));

    printf("A = %.5lf\n", A);
    return 0;
}
