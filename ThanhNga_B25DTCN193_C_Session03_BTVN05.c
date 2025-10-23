#include <stdio.h>

struct SinhVien {
    int stt;
    char hoten[30];
    int tuoi;
    char sdt[15];
    char email[40];
};

int main() {
    struct SinhVien sv[] = {
        {1, "Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {2, "Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {3, "Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com"},
        {4, "Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com"},
        {5, "Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {6, "Nguyen Van F", 19, "0904488486", "fnv@rikkeiacademy.com"},
        {7, "Nguyen Van G", 17, "0904488487", "gnv@rikkeiacademy.com"},
        {8, "Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {9, "Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {10, "Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"}
    };

    int n = sizeof(sv) / sizeof(sv[0]);

    printf(" ----------------------------------------------------------------------------- \n");
    printf("|                            DANH SACH SINH VIEN                             |\n");
    printf("|------------------------------------------------------------------------------|\n");
    printf("| STT | Ho va ten      | Tuoi | So dien thoai | email                        |\n");
    printf("|------------------------------------------------------------------------------|\n");

    for (int i = 0; i < n; i++) {
        printf("| %-3d | %-14s | %-4d | %-13s | %-28s|\n",
               sv[i].stt, sv[i].hoten, sv[i].tuoi, sv[i].sdt, sv[i].email);
        printf("|------------------------------------------------------------------------------|\n"); // <-- Gạch ngang giữa các sinh viên
    }

    return 0;
}
