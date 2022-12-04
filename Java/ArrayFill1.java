import java.util.Scanner;
public class ArrayFill1 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] array = new int[10];
        int num = scan.nextInt();
        for (int i=0; i<10; i++){
            if (i==0){
                array[i] = num;
            }else{
                num*=2;
                array[i] = num;
            }
        }
        for (int i=0; i<10; i++){
            System.out.println("N[" + i + "] = " + array[i]);
        }
    }
}
