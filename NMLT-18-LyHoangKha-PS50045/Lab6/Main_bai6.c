#include <stdio.h>
#include <stdlib.h>

// ==========================================
// KHAI BÁO NGUYÊN MẪU HÀM (FUNCTION PROTOTYPES)
// ==========================================
void tinhTrungBinhCong();
void timMaxMin();
void sapXepGiamDan();
void maTranBinhPhuong();
void xuatSoLeMaTran();

// ==========================================
// HÀM MAIN - ĐIỀU KHIỂN MENU
// ==========================================
int main() {
    int chon;
    do {
        printf("\n+---------------------------------------------------+");
        printf("\n|             MENU CHUONG TRINH LAB 6               |");
        printf("\n+---------------------------------------------------+");
        printf("\n| 1. Tinh trung binh tong so chia het cho 3 va 5    |");
        printf("\n| 2. Tim gia tri Lon nhat va Nho nhat trong Mang    |");
        printf("\n| 3. Sap xep Mang theo thu tu Giam dan              |");
        printf("\n| 4. Ma tran binh phuong (Mang 2 chieu)             |");
        printf("\n| 5. Loc va xuat vi tri cac So le trong Ma tran     |");
        printf("\n| 6. Thoat chuong trinh                             |");
        printf("\n+---------------------------------------------------+");
        printf("\n>> Xin moi chon chuc nang (1-6): ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                tinhTrungBinhCong();
                break;
            case 2:
                timMaxMin();
                break;
            case 3:
                sapXepGiamDan();
                break;
            case 4:
                maTranBinhPhuong();
                break;
            case 5:
                xuatSoLeMaTran();
                break;
            case 6:
                printf("\nCam on ban da su dung chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nChuc nang khong hop le! Vui long chon tu 1 den 6.\n");
        }
    } while (chon != 6);

    return 0;
}

// ==========================================
// CHỨC NĂNG 1: TRUNG BÌNH TỔNG CHIA HẾT CHO 3 VÀ 5
// ==========================================
void tinhTrungBinhCong() {
    int n;
    printf("\n--- CHUC NANG 1: TONG TRUNG BINH SO CHIA HET CHO 3 VA 5 ---\n");
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0!\n");
        return;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int tong = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 5 == 0) {
            tong += a[i];
            count++;
        }
    }

    if (count == 0) {
        printf("Khong co so nao trong mang chia het cho ca 3 va 5.\n");
    } else {
        float trungBinh = (float)tong / count;
        printf("Trung binh cong cac so chia het cho 3 va 5 la: %.2f\n", trungBinh);
    }
}

// ==========================================
// CHỨC NĂNG 2: TÌM MAX VÀ MIN TRONG MẢNG
// ==========================================
void timMaxMin() {
    int n;
    printf("\n--- CHUC NANG 2: TIM MAX VA MIN TRONG MANG ---\n");
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0!\n");
        return;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Gia tri Lon nhat (Max) = %d\n", max);
    printf("Gia tri Nho nhat (Min) = %d\n", min);
}

// ==========================================
// CHỨC NĂNG 3: SẮP XẾP MẢNG GIẢM DẦN
// ==========================================
void sapXepGiamDan() {
    int n;
    printf("\n--- CHUC NANG 3: SAP XEP MANG GIAM DAN ---\n");
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0!\n");
        return;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Thuật toán Sắp xếp (Selection Sort / Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

// ==========================================
// CHỨC NĂNG 4: MA TRẬN BÌNH PHƯƠNG
// ==========================================
void maTranBinhPhuong() {
    int row, col;
    printf("\n--- CHUC NANG 4: MA TRAN BINH PHUONG ---\n");
    printf("Nhap so hang (row): ");
    scanf("%d", &row);
    printf("Nhap so cot (col): ");
    scanf("%d", &col);

    if (row <= 0 || col <= 0) {
        printf("So hang va so cot phai lon hon 0!\n");
        return;
    }

    int a[row][col];
    printf("Nhap cac phan tu cho ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMa tran binh phuong ket qua:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}

// ==========================================
// CHỨC NĂNG 5: LỌC VÀ XUẤT VỊ TRÍ SỐ LẺ TRONG MA TRẬN
// ==========================================
void xuatSoLeMaTran() {
    int row, col;
    printf("\n--- CHUC NANG 5: LOC VA XUAT VI TRI SO LE TRONG MA TRAN ---\n");
    printf("Nhap so hang (row): ");
    scanf("%d", &row);
    printf("Nhap so cot (col): ");
    scanf("%d", &col);

    if (row <= 0 || col <= 0) {
        printf("So hang va so cot phai lon hon 0!\n");
        return;
    }

    int a[row][col];
    printf("Nhap cac phan tu cho ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCac so le va vi tri trong ma tran:\n");
    int countLe = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] % 2 != 0) {
                printf("Phan tu le tai a[%d][%d] = %d\n", i, j, a[i][j]);
                countLe++;
            }
        }
    }

    if (countLe == 0) {
        printf("Khong co so le nao trong ma tran!\n");
    }
}