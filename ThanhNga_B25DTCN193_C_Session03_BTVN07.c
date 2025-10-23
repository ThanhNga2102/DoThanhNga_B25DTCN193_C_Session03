#include <stdio.h>

int main() {
    int n;
    int a, b, c, d, S;

    printf("Nhap vao mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    // Tách từng chữ số
    a = n / 1000;           // Chữ số hàng nghìn
    b = (n / 100) % 10;     // Chữ số hàng trăm
    c = (n / 10) % 10;      // Chữ số hàng chục
    d = n % 10;             // Chữ số hàng đơn vị

    S = a + b + c + d;

    printf("Tong cac chu so cua %d la: %d\n", n, S);

    return 0;
}
