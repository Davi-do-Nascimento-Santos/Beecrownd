import java.util.Scanner;
public class LogicalSequence02 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int cont=1;
        int x = scan.nextInt();
        int y = scan.nextInt();
        for (int i=0; cont<=y; i++){
            for (int c=1; c<=x; c++) {
                System.out.print(cont);
                cont++;
                if (cont>y){
                    break;
                }
                if (c < x) {
                    System.out.print(" ");

                }
            }
            System.out.print("\n");
            if (cont>y){
                break;
            }
        }
    }
}
