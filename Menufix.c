#include <stdio.h> 
int main()
{
    int chon;
    float a; 
    do 
    {
    printf("+---------------------------------------------------+\n");
    printf("|              MENU CHUONG TRINH LAB 3              |\n");
    printf("|  0. Thoat chuong trinh                            |\n");
    printf("|  1. Chuc nang tinh hoc luc sinh vien              |\n");
    printf("|  2. Chuc nang giai phuong trinh bac hai           |\n");
    printf("|  3. Chuc nang tinh tien dien tieu thu hang thang  |\n");
    printf("+---------------------------------------------------+\n");
    printf(">> Chon chuc nang cua ban (0-3): ");
    scanf(" %d ", &chon);
    switch (chon)
    {
    case 0: 
    printf("Ban chon chuc nang 0: Thoat chuong trinh\n"); 
    break;  
    case 1:
    printf("Ban chon 1: Tinh hoc luc hoc sinh\n"); 
    printf ("Nhap diem trung binh: ");
    scanf(" %f ", &a);
    if (a >= 9 && a <= 10)
    {
    printf("Hoc luc xuat sac\n");
    }
    else if (a >= 8 && a < 9)
    { 
    }
    else if (a >= 7 && a < 8)
    {
     printf("Hoc luc kha\n");     
    }
    else if (a >= 5 && a < 7)
    {
     printf("Hoc luc trung binh\n");     
    }
    else if (a >= 0 && a < 5)
    {
     printf("Hoc luc yeu\n");     
    }
    else
    {
     printf("Diem trung binh khong hop le\n");
    }
    break ;
    case 2:
    printf("Ban chon 2: Giai phuong trinh bac hai\n"); 
    break;
    case 3: 
    printf("Ban chon 3: Tinh tien dien tieu thu hang thang\n");
    break;
    case 4: 
    printf("Ban chon 4: Tinh tien nuoc tieu thu hang thang\n"); 
    break;
}
while (chon != 0);
return 0;
}
}
    
    
    
    
    
    
    
    
    

