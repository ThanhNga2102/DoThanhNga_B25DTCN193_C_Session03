#include <stdio.h>

int main() {
    //Kieu chuoi
    char fullName[51];
    printf("Nhap vào ho và ten: ");
    scanf("%50[^\n]", fullName);
    printf("Xin chào (%s)\n", fullName);
    return 0;
}
