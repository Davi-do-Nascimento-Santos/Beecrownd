import java.util.Scanner;
public class SequenceIJ1 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        for (int i=1, j=60; j>=0; i+=3, j-=5){
            System.out.format("I=%d J=%d\n", i, j);
        }
    }
}
