package Aula_4.InverteString;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        String text;
        int num;


        System.out.print("Digite um Frase: ");
        text = ler.nextLine();

        num = text.length();

        for (int i = num-1; i >= 0;i--) {
            if (text.charAt(i) != ' ')
                System.out.print(text.charAt(i));
        }
    }

}
