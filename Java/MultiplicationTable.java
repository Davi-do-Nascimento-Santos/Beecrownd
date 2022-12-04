import java.util.Scanner;
public class MultiplicationTable {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        for (int i=1; i<=10; i++){
            System.out.format("%d X %d = %d\n", i, num, (i*num));
        }
    }
}
