#include <stdio.h>
#include <math.h>
int main()
{
    int chon;
    do
    {
        printf("-------------------------------------------------\n");
        printf("|            MOI ONG CHU CHON CHUC NANG         |\n");
        printf("-------------------------------------------------\n");
        printf("| 0.  Thoat chuong trinh                        |\n");
        printf("| 1.  Kiem tra so nguyen                        |\n");
        printf("| 2.  Tim uoc so chung va so boi chung          |\n");
        printf("| 3.  Tinh tien dien quan karaoke               |\n");
        printf("| 4.  Tinh tien dien                            |\n");
        printf("| 5.  Doi tien                                  |\n");
        printf("| 6.  Tinh lai xuat vay ngan hang vay tra gop   |\n");
        printf("| 7.  Vay tien mua xe                           |\n");
        printf("| 8.  Sap xep thong tinh sinh vien              |\n");
        printf("| 9.  Game Poly-LoTT                            |\n");
        printf("| 10. Tinh toan phan so                         |\n");
        printf("-------------------------------------------------\n");
        printf("Moi ong chu chon chuc nang: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 0:
            {
            printf("Ong chu da chon che do so 0. Thoat chuong trinh\n");
            break;
            }
            case 1:
            {
            printf("Ong chu da chon che do so 1. Nhap X \n");
            break;
            }
            case 2:
            {
            printf("Ong chu da chon che do so 2. Nhap X \n");
            break;
            }
            case 3:
            {
                printf("Ong chu da chon che do so 3. Nhap so Kw \n");
                break;
            }
            case 4:
            {
                printf("Ong chu da chon che do so 4. Nhap so tien dien \n");
                break;
            }
            case 5:
            {
                printf("Ong chu da chon che do so 5. Nhap ten moi \n");
                break;
            }
            case 6:
            {
                printf("Ong chu da chon che do so 6. Nhap so tien da vay \n");
                break;
            }
            case 7:
            {
                printf("Ong chu da chon che do so 7. Nhap so tien vay \n");
                break;
            }
            case 8:
            {
                printf("Ong chu da chon che do so 8. Nhap so sinh vien \n");
                break;
            }
            case 9:
            {
                printf("Ong chu da chon che do so 9. Chuan bi bat dau tro choi \n");
                break;
            }
            case 10:
            {
                printf("Ong chu da chon che do so 10. Nhap so phan so \n");
                break;
            }
        }
    } while (chon != 0);
    return 0;
}