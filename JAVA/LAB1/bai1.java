import package bai1.java
import java.nio.charset.StandardCharsets;
import java.util.Scanner;
public class bai1 {
    public static void main(String[] args) {
    Scanner nhap = new Scanner(System.in, StandardCharsets.UTF_8);
        // Khai báo mảng chứa thông tin của 3 người
        String[] hoten = new String[3];
        int[] namsinh = new int[3];
        // 1. Nhập thông tin cho 3 người
        for (int i = 0; i < 3; i++) {
            System.out.printf("Moi ban nhap ho ten va nam sinh nhe: %d\n", i + 1);
            
            System.out.print("Vui long nhap ho ten: ");
            hoten[i] = nhap.nextLine();
            
            System.out.print("Vui long nhap nam sinh: ");
            namsinh[i] = nhap.nextInt();
            
            // Xóa bộ nhớ đệm (nuốt phím Enter thừa từ nextInt)
            nhap.nextLine(); 
        }
        // 2. Xuất thông tin 3 người kèm năm sinh và tuổi
        for (int i = 0; i < 3; i++) {
            System.out.printf("Nguoi thu  %d: %s - Nam sinh: %d (Tuoi: %d)\n", 
                i + 1, hoten[i], namsinh[i], 2026 - namsinh[i]);
        }
        nhap.close();
    }
}