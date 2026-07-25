#include <stdio.h> //khai bao thu vien

int main() {
    float diemToan, diemLy, diemHoa, diemTB; //khai bao cac bien de luu tru diem toan, diem ly, diem hoa va diem trung binh

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");  
    scanf("%f", &diemHoa);

    diemTB = (diemToan * 3 + diemLy * 2 + diemHoa) / 6; //tinh diem trung binh theo cong thuc diemTB = (diemToan * 3 + diemLy * 2 + diemHoa) / 6

    printf("===KET QUA===\n");
    printf("Diem trung binh: %.2f\n", diemTB);

    system("pause");
    return 0;
}