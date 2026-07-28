#include <stdio.h>

int main() {
    int chon;

    do {
        printf("\n================ MENU LAB 4 ================\n");
        printf("1. Tinh trung binh cac so chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &chon);

        switch(chon) {
            case 1:
                // Code chức năng 1
                break;

            case 2:
                // Code chức năng 2
                break;

            case 3:
                // Code chức năng 3
                break;

            case 4:
                printf("Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while(chon != 4);

    return 0;
}
