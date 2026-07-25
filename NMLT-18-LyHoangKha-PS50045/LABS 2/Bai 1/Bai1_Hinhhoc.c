#include <stdio.h> //   khai bao thu vien
#define PI 3.14159 //khai bao hang so PI de tinh chu vi va dien tich hinh tron

int main(){
    float chieudaiHCN, chieurongHCN, bankinhHT, chuviHCN, dientichHCN, chuviHT, dientichHT; //khai bao cac bien de luu tru chieu dai, chieu rong, ban kinh, chu vi va dien tich cua hinh chu nhat va hinh tron

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieudaiHCN);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieurongHCN);
    chuviHCN = 2 * (chieudaiHCN + chieurongHCN);
    dientichHCN = chieudaiHCN * chieurongHCN;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinhHT);
    chuviHT = 2 * PI * bankinhHT;
    dientichHT = PI * bankinhHT * bankinhHT;

    printf("===KET QUA===\n");
    printf("Chu vi hinh chu nhat: %.2f\n", chuviHCN);
    printf("Dien tich hinh chu nhat: %.2f\n", dientichHCN);
    printf("Chu vi hinh tron: %.2f\n", chuviHT);
    printf("Dien tich hinh tron: %.2f\n", dientichHT);

    system ("pause");
    return 0;
}