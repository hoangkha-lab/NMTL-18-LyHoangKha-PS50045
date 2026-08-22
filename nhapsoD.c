#include <stdio.h> // khai bao thu vien nhap xuat 
int main() {
    float d; // Khai báo biến d co kiểu số thực float để lưu điểm số

    //de bai kiểm tra chỉ cho nhập điểm từ 0 đến 10 bằng vòng lặp do-while
    do {
    printf("Moi ban nhap mot diem d (0 - 10): "); // thong bao ra man hinh "nhao diem D"
    scanf("%f", &d); // Nhập điểm d từ bàn phím %f dành cho kiểu float
        
        
    
        
    // noi dung nhap vao neu  ngoai khoan 0 va 10 se bao loi va se yeu cau nhap lai 
    if (d < 0 || d > 10) {// Nếu d < 0 hoặc d > 10 thì code se thông báo lỗi
    printf("Diem cua ban khong hop le.Xin vui long nhap lai! \n"); //day la thong bao khi du lieu nhap vao khong chinh xac voi dieu kien if
    }
    } while (d < 0 || d > 10); // Lặp lại việc nhập nếu dieu kien van la  d < 0 hoặc d > 10



    // deu kien if  nếu điểm lớn hơn hoặc bằng 5 thì đậu, còn lại là rớt
    if (d >= 5) { 
        printf("Ket qua dau.Xin chuc mung ban!!!\n"); // In ra "Ket qua dau. Xin chuc mung ban!!!" nếu điểm dat dieu kien d >= 5
    } else {
        printf("Ket qua Rot.Tiec qua, chuc ban may man lan sau nhe!!!\n"); // In ra "Ket qua rot.Tiec qua, chuc ban may man lan sau nhe!!!" nếu điểm d < 5 
    }

    return 0; // ke thuc ham main 
}