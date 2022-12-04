import java.util.Scanner;
public class Salary {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int number, hours;
        double money;
        number = scan.nextInt();
        hours = scan.nextInt();
        money = scan.nextDouble();
        System.out.println("NUMBER = " + number);
        System.out.format("SALARY = U$ %.2f\n", (hours*money));
    }
}
