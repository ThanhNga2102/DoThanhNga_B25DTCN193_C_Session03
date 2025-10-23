#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Nhiet do %.2f do Celsius tuong duong voi %.2f do Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

