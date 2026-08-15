#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 50 // Định nghĩa sức chứa tối đa cho mảng sinh viên (tối đa 50 sinh viên)

//================= CHỨC NĂNG 1: Kiểm tra số nguyên =================
void kiemTraSoNguyen() {
    float x;
    printf("\n--- KIEM TRA SO NGUYEN ---\n");
    printf("Nhap so: ");
    scanf("%f", &x);

    // Ép kiểu x sang int để so sánh với chính nó. Nếu bằng nhau -> là số nguyên
    if (x == (int)x)
        printf("%.0f la so nguyen.\n", x);
    else
        printf("%.2f khong phai la so nguyen.\n", x);
}

//================= CHỨC NĂNG 2: Tìm UCLN & BCNN =================

// Hàm phụ: Thuật toán Euclid để tìm Ước chung lớn nhất (UCLN)
int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return abs(a); // Trả về giá trị tuyệt đối của a
}

void timUCLNBCNN() {
    int a, b;
    printf("\n--- TIM UCLN & BCNN ---\n");
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    // Tránh lỗi chia cho 0 khi tính BCNN
    if (a == 0 || b == 0) {
        printf("Khong tinh duoc BCNN khi a hoac b bang 0.\n");
        return;
    }

    int ucln = UCLN(a, b);
    
    // NOTE: Ép kiểu sang long long và chia trước nhân sau để tránh tràn số (overflow) khi a*b quá lớn
    long long bcnn = (long long)abs(a / ucln) * abs(b);

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %lld\n", bcnn);
}

//================= CHỨC NĂNG 3: Tính tiền Karaoke =================
void karaoke() {
    int gioBatDau, gioKetThuc;
    float tien;

    printf("\n--- TINH TIEN KARAOKE ---\n");
    printf("Nhap gio bat dau (12-23): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (12-23): ");
    scanf("%d", &gioKetThuc);

    // Kiểm tra điều kiện thời gian quán hoạt động (12h đến 23h)
    if (gioBatDau < 12 || gioKetThuc > 23 || gioKetThuc <= gioBatDau) {
        printf("Gio khong hop le! Quan chi mo cua tu 12h den 23h.\n");
        return;
    }

    int soGio = gioKetThuc - gioBatDau;
    tien = soGio * 150000; // Giá mặc định 150k/giờ

    // NOTE: Giảm 30% cho các giờ từ giờ thứ 4 trở đi
    if (soGio > 3) {
        tien -= (soGio - 3) * 150000 * 0.3;
    }

    // NOTE: Giảm thêm 10% nếu giờ bắt đầu nằm trong khung giờ vàng (14h - 17h)
    if (gioBatDau >= 14 && gioBatDau <= 17) {
        tien *= 0.9;
    }

    printf("Tong tien karaoke: %.0f VND\n", tien);
}

//================= CHỨC NĂNG 4: Tính tiền điện =================
void tinhTienDien() {
    float soDien, tien = 0;

    printf("\n--- TINH TIEN DIEN ---\n");
    printf("Nhap so kWh: ");
    scanf("%f", &soDien);

    if (soDien < 0) {
        printf("So kWh khong hop le!\n");
        return;
    }

    // NOTE: Tính tiền điện theo phương pháp bậc thang (chia mốc kWh)
    if (soDien <= 50)
        tien = soDien * 1678;
    else if (soDien <= 100)
        tien = 50 * 1678 + (soDien - 50) * 1734;
    else if (soDien <= 200)
        tien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
    else if (soDien <= 300)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536;
    else if (soDien <= 400)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soDien - 300) * 2834;
    else
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soDien - 400) * 2927;

    printf("Tien dien = %.0f VND\n", tien);
}

//================= CHỨC NĂNG 6: Tính lãi suất vay ngân hàng =================
void laiSuat() {
    float tienVay = 500000000; // Tiền gốc ban đầu: 500 triệu
    float lai = 0.05 / 12;     // Lãi suất tháng = 5% / 12 tháng
    float goc = tienVay / 288;   // Tiền gốc phải trả mỗi tháng (24 năm = 288 tháng)

    printf("\n--- BANG VAY TRA GOP 24 NAM (288 THANG) ---\n");
    printf("%-5s %-15s %-15s %-15s %-15s\n",
           "Thang", "Goc", "Lai", "Tong Tra", "Con Lai");

    // Vòng lặp chạy qua từng tháng trong 288 tháng
    for (int i = 1; i <= 288; i++) {
        float laiThang = tienVay * lai;       // Lãi tính trên số tiền gốc còn lại
        float tong = goc + laiThang;          // Tổng tiền phải trả trong tháng (gốc + lãi)

        tienVay -= goc;                       // Trừ dần tiền gốc sau mỗi tháng
        if (tienVay < 0) tienVay = 0;         // Tránh hiện tượng số âm do sai số dấu phẩy động

        printf("%-5d %-15.0f %-15.0f %-15.0f %-15.0f\n",
               i, goc, laiThang, tong, tienVay);
    }
}

//================= CHỨC NĂNG 8: Sắp xếp thông tin Sinh Viên =================

// Khai báo kiểu dữ liệu cấu trúc (struct) SinhVien gồm Tên và Điểm
struct SinhVien {
    char ten[30];
    float diem;
};

void sapXepSinhVien() {
    int n;

    printf("\n--- SAP XEP DANH SACH SINH VIEN ---\n");
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So luong sinh vien khong hop le (1 - %d)!\n", MAX);
        return;
    }

    struct SinhVien ds[MAX]; // Khai báo mảng cấu trúc SinhVien

    // 1. Nhập thông tin sinh viên từ bàn phím
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("  Ten: ");
        scanf(" %[^\n]", ds[i].ten); // Dùng %[^\n] để nhập được chuỗi có dấu cách (khoảng trắng)
        printf("  Diem: ");
        scanf("%f", &ds[i].diem);
    }

    // 2. NOTE: Thuật toán sắp xếp nổi bọt (Bubble Sort) giảm dần theo điểm số
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].diem < ds[j].diem) { // Nếu điểm đứng trước nhỏ hơn điểm đứng sau -> Đổi chỗ
                struct SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    // 3. Xuất kết quả kèm theo xếp loại học lực
    printf("\n================ DANH SACH SAU KHI SAP XEP ================\n");
    printf("%-5s %-25s %-10s %-15s\n", "STT", "Ho va Ten", "Diem", "Hoc Luc");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        char hocLuc[20];
        // Phân loại học lực dựa vào điểm số
        if (ds[i].diem >= 9.0) sprintf(hocLuc, "Xuat sac");
        else if (ds[i].diem >= 8.0) sprintf(hocLuc, "Gioi");
        else if (ds[i].diem >= 6.5) sprintf(hocLuc, "Kha");
        else if (ds[i].diem >= 5.0) sprintf(hocLuc, "Trung binh");
        else sprintf(hocLuc, "Yeu");

        printf("%-5d %-25s %-10.1f %-15s\n", i + 1, ds[i].ten, ds[i].diem, hocLuc);
    }
}

//================= HÀM MAIN: Điều hướng Menu chương trình =================
int main() {
    int chon;

    // Vòng lặp do-while giúp chương trình chạy liên tục cho đến khi người dùng chọn 0 để thoát
    do {
        printf("\n================ MENU CHUONG TRINH ================\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN va BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("6. Tinh lai suat vay ngan hang\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("0. Thoat\n");
        printf("===================================================\n");
        printf("Chon chuc nang [0-8]: ");
        scanf("%d", &chon);

        // Cấu trúc điều kiện switch-case để gọi hàm tương ứng với lựa chọn
        switch (chon) { //swaitch dung de tuong tac voi chuot
        
            case 1: kiemTraSoNguyen(); break;
            case 2: timUCLNBCNN(); break;
            case 3: karaoke(); break;
            case 4: tinhTienDien(); break;
            case 6: laiSuat(); break;
            case 8: sapXepSinhVien(); break;
            case 0: printf("\nDa thoat chuong trinh. Tam biet!\n"); break;
            default: printf("\nChuc nang khong hop le. Vui long chon lai!\n");
        }
    } while (chon != 0);

    return 0;
}