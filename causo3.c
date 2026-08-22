#include <stdio.h> // khai bao thu vien nhap xuat
#include <string.h> // Thư viện để làm việc với chuỗi (đặc biệt là xóa ký tự '\n' thừa)



//  Khai báo một cấu trúc thông tin HANGHOA
struct HANGHOA {
    int maHang; // Mã hàng hóa (số nguyên)
    char tenHang[50];// Tên hàng hóa (chuỗi tối đa 50 ký tự)
    int soLuong;// Số lượng bat buoc phai nhap so nguyen.
};

