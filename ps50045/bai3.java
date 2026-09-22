//Bai 4: Nhap chieu dai, chieu rong. Tinh chu vi, dien tich hinh chu nhat

import java.util.Scanner;

public class bai3 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        double dai, rong, chuVi, dienTich;

        System.out.print("Nhap chieu dai: ");
        dai = sc.nextDouble();
        System.out.print("Nhap chieu rong: ");
        rong = sc.nextDouble();

        chuVi = 2 * (dai + rong);
        dienTich = dai * rong;

        System.out.println("Chu vi hinh chu nhat la: " + chuVi);
        System.out.println("Dien tich hinh chu nhat la: " + dienTich);
    }
}