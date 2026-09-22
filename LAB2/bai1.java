
package LAB2;

import java.util.Scanner;

public class bai1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Nhap diem toan: ");
        double diemToan = sc.nextDouble();
        System.out.print("Nhap diem ly: ");
        double diemLy = sc.nextDouble();
        System.out.print("Nhap diem hoa: ");
        double diemHoa = sc.nextDouble();
        
        double diemTB = (diemToan * 2 + (diemHoa + diemLy))/ 4.0;
             
        String ketQua = (diemTB >= 5) ? "dat" : "khong dat";
        xepLoai(diemTB, ketQua);
        sc.close();
    }
    
    static void xepLoai(double diemTB, String ketQua) {
        if (diemTB >= 8) {
            System.out.println("Gioi");
        } else if (diemTB >= 6.5) {
            System.out.println("Kha");
        } else if (diemTB >= 5) {
            System.out.println("Trung binh");
        } else {
            System.out.println("Yeu");
        }
        System.out.println("Ket qua: "+ ketQua);
    }
}