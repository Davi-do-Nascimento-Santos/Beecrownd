import java.util.Scanner;
public class AreaOfACircle {
    public static void main(String[] args){
        double r;
        Scanner scan = new Scanner(System.in);
        r = scan.nextDouble();
        System.out.format("A=%.4f\n", (r*r*3.14159));
    }
}
