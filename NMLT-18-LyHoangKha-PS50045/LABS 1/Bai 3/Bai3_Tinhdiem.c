#include <stdio.h> //khai bao thu vien
int main () 
{
    char mssv[20]; //   khai bao bien mssv de luu tru ma so sinh vien      
    char Hoten[50]; //   khai bao bien hoten de luu tru ho va ten sinh vien
    float toan, ly, hoa, dTB; //   khai bao bien diemTB de luu tru diem trung binh cua sinh vien

    printf("Nhap ma so sinh vien: ");
    scanf("%19s", mssv);

    getchar();

    printf("Nhap ho va ten: ");
    fgets(Hoten, sizeof(Hoten), stdin);

    printf("Nhap diem Toan:");
    scanf("%f", &toan);
    printf("Nhap diem Ly:");
    scanf("%f", &ly);
    printf("Nhap diem Hoa:");
    scanf("%f", &hoa);

    dTB = (toan*2+ly+hoa)/ (float)4; //tinh diem trung binh

    printf("*KET QUA*\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s", Hoten);
    printf("Diem trung binh: %.2f\n", dTB);
   
   {
    system("pause");
    return 0;
   }

}