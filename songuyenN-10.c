#include <stdio.h>// khai báo thư viện nhập xuất
int main() { // ham chin de chay chuong trinh 
    int n; //dat ten bien ten bien o day la N
    printf("Moi ban nhap so luong phan tu n: ");//xuat ra man hinh voi thong trong "xxx"
    scanf("%d", &n); //scanf la dung de nhap du lieu tu ban phim
    
    int a[n]; // bien a co n la so nguyen
    
    // 1. nhập mảng n số nguyên
    for (int i = 0; i < n; i++) { // khởi tạo i = 0, lặp khi i < n, tăng i lên 1 sau mỗi lần lặp
    printf("Nhap a[%d]: ", i); // In ra màn hình thông báo yêu cầu nhập (thay %d bằng giá trị của i)
    scanf("%d", &a[i]); // Đọc số nguyên vừa nhập từ bàn phím và lưu vào phần tử a[i]
}     // kết thúc khối lệnh của vòng lặp for
    
    
    
    // 2. tính tổng các số chia hết cho 5 nhưng không chia hết cho 3
    int tong = 0; // khởi tạo biến tong để lưu tổng ban đầu bằng 0
    for (int i = 0; i < n; i++) { // lặp qua từng phần tử của mảng a từ 0 đến n-1 
        if (a[i] % 5 == 0 && a[i] % 3 != 0) { // kiểm tra nếu phần tử a[i] chia hết cho 5 và không chia hết cho 3
            tong += a[i];
        }
}
      
      
      
    printf("Tong cac so chia het cho 5 va khong chia het cho 3 la: %d\n", tong);// xuat thong bao ra man hinh voi noi dug trong "xxx" va gia tri cua bien tong
    
    return 0; // ket thuc ham main
}