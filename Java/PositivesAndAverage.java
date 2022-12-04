import java.util.Scanner;
public class PositivesAndAverage {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double[] elements = new double[6];
        int cont=0;
        double sum=0;
        for (int i=0; i<6; i++){
            double num = scan.nextDouble();
            if (num>0){
                elements[cont] = num;
                sum+=elements[cont];
                cont++;
            }
        }
        System.out.println(cont + " valores positivos");
        System.out.format("%.1f\n", sum/cont);
    }
}
