import java.util.Scanner;
public class CoordinatesOfAPoint {
    public static void main(String[] args){
        double x, y;
        Scanner scan = new Scanner(System.in);
        x = scan.nextDouble();
        y = scan.nextDouble();
        if (x>0 && y >0){
            System.out.println("Q1");
        }else if (x<0 && y<0){
            System.out.println("Q3");
        }else if (x>0 && y<0){
            System.out.println("Q4");
        }else if (x<0 && y>0){
            System.out.println("Q2");
        }else if (x==0 && y!= 0){
            System.out.println("Eixo Y");
        }else if (x!=0 && y==0){
            System.out.println("Eixo X");
        }else{
            System.out.println("Origem");
        }
    }
}
