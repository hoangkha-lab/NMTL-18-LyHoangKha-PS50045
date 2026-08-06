#include <stdio.h>
#include <stdlib.h>

// --- NGUYÊN MẪU HÀM (FUNCTION PROTOTYPE) ---
void timGiaTriLonNhat(void);
void kiemTraNamNhuan(void);
void hoanViHaiSo(void);
void kiemTraPhanLoaiTamGiac(void);

// --- HÀM CHÍNH (MAIN) ---
int main(void) {
    int luaChon;

    do {
        // Giao diện Menu hiển thị
        printf("+---------------------------------------+\n");
        printf("|        MENU CHUONG TRINH LAB 5        |\n");
        printf("+---------------------------------------+\n");
        printf("| 1. Tim gia tri lon nhat trong 3 so    |\n");
        printf("| 2. Kiem tra Nam nhuan                 |\n");
        printf("| 3. Hoan vi 2 so (Su dung Con tro)     |\n");
        printf("| 4. Kiem tra & Phan loai Tam giac      |\n");
        printf("| 5. Thoat chuong trinh                 |\n");
        printf("+---------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        
        // Đọc lựa chọn từ người dùng
        scanf("%d", &luaChon);

        // Điều khiển gọi các hàm chức năng bằng switch-case
        switch (luaChon) {
            case 1:
                timGiaTriLonNhat();
                break;
            case 2:
                kiemTraNamNhuan();
                break;
            case 3:
                hoanViHaiSo();
                break;
            case 4:
                kiemTraPhanLoaiTamGiac();
                break;
            case 5:
                printf("\nCam on ban da su dung chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\n[Loi] Lua chon khong hop le! Vui long chon lai tu 1 den 5.\n\n");
        }
        
        // Thêm khoảng trống và tạm dừng để dễ quan sát sau mỗi chức năng
        if (luaChon != 5) {
            printf("\n---------------------------------------\n\n");
        }

    } while (luaChon != 5);

    return 0;
}

// --- ĐỊNH NGHĨA CÁC HÀM CHI TIẾT (STUB/MÔ-ĐUN HÓA) ---

// Chức năng 1
void timGiaTriLonNhat(void) {
    printf("\n--> Ban da chon: Tim gia tri lon nhat trong 3 so.\n");
    // Sinh viên viết code xử lý chi tiết tại đây
}

// Chức năng 2
void kiemTraNamNhuan(void) {
    printf("\n--> Ban da chon: Kiem tra Nam nhuan.\n");
    // Sinh viên viết code xử lý chi tiết tại đây
}

// Chức năng 3
void hoanViHaiSo(void) {
    printf("\n--> Ban da chon: Hoan vi 2 so (Su dung Con tro).\n");
    // Sinh viên viết code xử lý chi tiết tại đây
}

// Chức năng 4
void kiemTraPhanLoaiTamGiac(void) {
    printf("\n--> Ban da chon: Kiem tra & Phan loai Tam giac.\n");
    // Sinh viên viết code xử lý chi tiết tại đây
}