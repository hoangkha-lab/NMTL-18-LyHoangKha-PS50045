#include <stdio.h> // khai báo thư viện nhập xuất
#include <math.h> // khai báo thư viện tính toán
int main() { // hàm main là hàm chính của chương trình sẽ khỏi chạy chương trình
    int tuoi; // int la dùng để khai bao biến  //int còn là kiểu dữ liệu số nguyên
    // 1. Nhập tuổi (Bắt buộc nhập đúng từ 1 đến 120)
    do {
        printf("Xin hay nhap do tuoi cua ban: ");
        scanf("%d", &tuoi); // la dung de nhap xuất thông tin của biến madf bạn đa khai báo ở trên
        if (tuoi <= 0 || tuoi >= 55) { // if là ở đây là nếu cũng có nghĩa là điều khiện của bạn nếu đúng nó sẽ xuất ra kết quả ở mục printf ở dưới.
            printf("Tuoi khong hop le, vui long nhap lai!\n"); // dòng này nó sẽ thông báo nếu kết quả của bạn bị 
        }
    } while (tuoi <= 0 || tuoi >= 55) ;

    // 2. Xét độ tuổi
    
     if (tuoi < 13) { // Tuoi tu 13 den 14 //if va else la dieu kien neu thi neu if nhu dieu kien dat ra thi ket qua se xuat ra dung, con neu  ket qua nguoi nhap vao sai thi ket qua se bao nguoi dung nhap lai ket qua khac
        printf("Tre em\n");
    } else if ( tuoi < 15){
        printf("Vi thanh nien\n");
    } else if (tuoi < 18) { // Tuoi duoi 18
        printf("Thieu nien\n");
    } else if (tuoi < 35) { // Tuoi tu 18 den 34
        printf("Thanh nien\n");
    } else if (tuoi < 55) { // Tuoi tu 35 den 54
        printf("Trung nien\n");
    } else if (tuoi >= 55) { // Tuoi >= 55
        printf("Nguoi cao tuoi\n");
    }
 return 0;
}
