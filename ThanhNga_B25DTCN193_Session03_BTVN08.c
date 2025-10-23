#include <stdio.h>

int main() {
    int n;
    int a, b, c, d, nghich_dao;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    // Tách từng chữ số
    a = n / 1000;           // Hàng nghìn
    b = (n / 100) % 10;     // Hàng trăm
    c = (n / 10) % 10;      // Hàng chục
    d = n % 10;             // Hàng đơn vị

    // Tạo số nghịch đảo
    nghich_dao = d * 1000 + c * 100 + b * 10 + a;

    printf("So nghich dao la: %d\n", nghich_dao);

    return 0;
}
