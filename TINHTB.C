
#include <stdio.h>

#include <stdlib.h>

int main () {
    char mssv[20];
    char hoten[50];
    int namsinh;
    int tuoi;
    float diemTB;

    printf("--- NHAP THONG TIN SINH VIEN ---\n");
    printf("NHAP MA SO SINH VIEN: ");
    scanf("%19s", mssv); // Đã sửa thành %19s để an toàn chống tràn bộ nhớ
    getchar(); // Xóa bộ nhớ đệm để không bị trôi lệnh fgets phía sau

    printf("NHAP HO VA TEN: ");
    fgets(hoten, sizeof(hoten), stdin);

    printf("NHAP NAM SINH: ");
    scanf("%d", &namsinh);

    printf("NHAP DIEM TRUNG BINH: ");
    scanf("%f", &diemTB);

    // Tính tuổi dựa trên năm hiện tại 2026
    tuoi = 2026 - namsinh;

    printf("\nTHONG TIN SINH VIEN VUA NHAP:\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s", hoten); // fgets đã có sẵn dấu xuống dòng
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diemTB);

    system("pause");
    return 0;
}





