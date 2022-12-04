import java.util.Scanner;
public class BankNotes {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num;
        num = scan.nextInt();
        int[] notes = {100, 50, 20, 10, 5, 2, 1};
        int[] vezes = new int[7];
        System.out.println(num);
        for (int c=0; c<7; c++){
            int times=0;
            while (true){
                if (num>=notes[c]) {
                    num -= notes[c];
                    times++;
                }else{
                    break;
                }
            }
            vezes[c] = times;
        }
        for (int c=0; c<7; c++){
            System.out.format("%d nota(s) de R$ %d,00\n", vezes[c], notes[c]);
        }
    }
}