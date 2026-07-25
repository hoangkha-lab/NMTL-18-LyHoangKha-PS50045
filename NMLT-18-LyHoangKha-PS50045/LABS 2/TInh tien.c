#include <stdio.h> //khai bao thu vien

int main() { //ham chinh cua chuong trinh
    float gia_gao = 2;
    float gia_dau = 1.5;
    float ti_gia_do = 26.29;
    
    float so_luong_gao, so_luong_dau; //khai bao cac bien de luu tru so luong gao va so luong dau
    float tong_tien_do, tong_tien_vnd; //khai bao cac bien de luu tru tong tien (USD) va tong tien (VND)

    printf("Nhap so luong gao: ");
    scanf("%f", &so_luong_gao);

    printf("Nhap so luong dau: ");
    scanf("%f", &so_luong_dau);

    tong_tien_do = so_luong_gao * gia_gao + so_luong_dau * gia_dau;
    tong_tien_vnd = tong_tien_do * ti_gia_do;

    printf("Tong tien (USD): %.2f\n", tong_tien_do);
    printf("Tong tien (VND): %.2f\n", tong_tien_vnd);

    return 0;
}