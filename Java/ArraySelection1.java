import java.util.Scanner;
public class ArraySelection1 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double[] array = new double[100];
        for (int i=0; i<100; i++){
            array[i] = scan.nextDouble();
        }
        for (int i=0; i<100; i++){
            if (array[i] <= 10){
                System.out.format("A[%d] = %.1f\n", i, array[i]);
            }
        }
    }
}
