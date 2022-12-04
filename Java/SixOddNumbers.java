import java.util.Scanner;
public class SixOddNumbers {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int cont=0;
        for (int i=num; cont<6; i++){
            if (i%2!=0){
                System.out.println(i);
                cont++;
            }
        }
    }
}
