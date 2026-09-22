//Bai 3: Nhap ban kinh. Tinh chu vi, dien tich

import java.util.Scanner;

public class bai2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        final double PI = 3.1416;
        double banKinh, chuVi, dienTich;

        System.out.print("Nhap ban kinh hinh tron: ");
        banKinh = sc.nextDouble();
        chuVi = PI * banKinh * 2;
        dienTich = PI * banKinh * banKinh;
        System.out.println("Chu vi hinh tron la: " + chuVi);
        System.out.println("Dien tich hinh tron la: " + dienTich);
    }
}