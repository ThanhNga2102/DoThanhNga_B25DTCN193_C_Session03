#include <stdio.h>

int main() {
    float base, height, area;

    // Nhập độ dài cạnh đáy và chiều cao
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &base);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);

    // Tính diện tích tam giác
    area = (base * height) / 2;

    // In kết quả ra màn hình với 2 chữ số thập phân
    printf("Dien tich tam giac la: %.2f\n", area);

    return 0;
}
