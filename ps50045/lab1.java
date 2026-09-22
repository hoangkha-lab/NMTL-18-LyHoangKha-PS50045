import java.nio.charset.StandardCharsets;
import java.util.Scanner;

public class lab1 {
    public static void main(String[] args) {
    Scanner nhap = new Scanner(System.in, StandardCharsets.UTF_8);
        // Khai báo mảng chứa thông tin của 3 người
        String[] hoten = new String[3];
        int[] namsinh = new int[3];
        // 1. Nhập thông tin cho 3 người
        for (int i = 0; i < 3; i++) {
            System.out.printf("Mời bạn nhập họ tên và năm người thứ %d\n", i + 1);
            
            System.out.print("Mời bạn nhập họ tên: ");
            hoten[i] = nhap.nextLine();
            
            System.out.print("Mời bạn nhập năm sinh: ");
            namsinh[i] = nhap.nextInt();
            
            // Xóa bộ nhớ đệm (nuốt phím Enter thừa từ nextInt)
            nhap.nextLine(); 
        }
        // 2. Xuất thông tin 3 người kèm năm sinh và tuổi
        for (int i = 0; i < 3; i++) {
            System.out.printf("Người thứ  %d: %s - Năm sinh: %d (Tuổi: %d)\n", 
                i + 1, hoten[i], namsinh[i], 2026 - namsinh[i]);
        }
        nhap.close();
    }
}