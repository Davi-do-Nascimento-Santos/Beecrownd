import java.util.Scanner;
public class SimpleProduct {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a, b;
        a = scan.nextInt();
        b = scan.nextInt();
        System.out.println("PROD = " + (a*b));
    }
}
