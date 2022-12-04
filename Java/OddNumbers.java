import java.util.Scanner;
public class OddNumbers {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        for (int i=0; i<=num; i++){
            if (i%2!=0){
                System.out.println(i);
            }
        }
    }
}
