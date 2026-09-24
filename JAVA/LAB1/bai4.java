
import package bai4.java;
import java.util.Scanner;
public class bai4 {
    public static void main(String[] args) {
        Scanner nhap = new Scanner(System.in);

        System.out.println("Nhap a: ");
        int a = nhap.nextInt();
        System.out.println("Nhap b: ");
        int b = nhap.nextInt();

        System.out.println("Nhap (+, -, *, /): ");
        char phepToan = nhap.next().charAt(0);
        switch (phepToan) {
            case '+':
                System.out.println("phep cong");
                System.out.println("Ket qua: " + (a + b));
                break;
            case '-':
                System.out.println("phep tru");
                System.out.println("Ket qua: " + (a - b));
                break;
            case '*':
                System.out.println("phep nhan");
                System.out.println("Ket qua: " + (a * b));
                break;
            case '/':
                System.out.println("phep chia");
                if (b == 0) {
                    System.out.println("Khong the chia cho 0");
                    return;
                } else {
                    System.out.println("Ket qua: " + (a / b));
                }

                break;
            default:
                System.out.println("Phep toan khong hop le");
        }
    }
}
