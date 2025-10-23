#include <stdio.h>

int main() {
    float toan, van, anh;
    float tong, trung_binh;

    // Nhập điểm
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Tính tổng và trung bình
    tong = toan + van + anh;
    trung_binh = tong / 3;

    // In kết quả, lấy 2 chữ số thập phân
    printf("Tong diem = %.2f\n", tong);
    printf("Diem trung binh = %.2f\n", trung_binh);

    return 0;
}
