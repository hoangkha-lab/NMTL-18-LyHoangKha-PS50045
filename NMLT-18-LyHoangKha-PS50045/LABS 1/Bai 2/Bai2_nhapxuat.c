#include <stdio.h> //khai bao thu vien
#include <stdlib.h>

int main (){ //ham chinh cua truong trinh
    char mssv[20]; //khai bao bien mssv de luu tru ma so sinh vien
    char hoten[50]; //khai bao bien hoten de luu tru ho va ten sinh vien
    int namsinh; //khai bao bien namsinh de luu tru nam sinh cua sinh vien
    int tuoi; //khai bao bien tuoi de luu tru tuoi cua sinh vien
    float diemTB; //khai bao bien diemTB de luu tru diem trung binh cua sinh vien

    printf("--- NHAP THONG TIN SINH VIEN ---\n");

    printf("NHAP MA SO SINH VIEN: ");
    scanf("%s", mssv); //nhap ma so sinh vien tu ban phim

    getchar();

    printf("NHAP HO VA TEN: ");
    fgets(hoten, sizeof(hoten), stdin); //nhap ho va ten tu ban phim
    
    printf("NHAP NAM SINH: ");
    scanf("%d", &namsinh); //nhap nam sinh tu ban phim

    printf("NHAP DIEM TRUNG BINH: ");
    scanf("%f", &diemTB);

    tuoi = 2026 - namsinh; //tinh tuoi cua sinh vien dua tren nam sinh

    printf("\nTHONG TIN SINH VIEN VUA NHAP:\n");  // nhap thong tin sinh vien vua nhap
    printf("Ma so sinh vien :%s\n", mssv);
    printf("Ho va ten :%s\n", hoten);
    printf("Nam sinh: %d\n", namsinh);  
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diemTB);
{
    system("pause");
    return 0;
}
}