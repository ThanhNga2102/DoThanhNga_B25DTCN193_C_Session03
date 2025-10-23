#include <stdio.h>
#include <math.h> // để dùng hằng số M_PI

int main() {
    double r, chu_vi, dien_tich;

    // Nhập bán kính
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);

    // Tính chu vi và diện tích
    chu_vi = 2 * M_PI * r;
    dien_tich = M_PI * r * r;

    // In kết quả, hiển thị 2 chữ số thập phân
    printf("Chu vi = %.2lf\n", chu_vi);
    printf("Dien tich = %.2lf\n", dien_tich);

    return 0;
}
