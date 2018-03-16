package Aula_4.UltimoCarater;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String frase;
        int num;
        Scanner ler = new Scanner(System.in);

        System.out.print("Digite uma Frase: ");
        frase = ler.next();
        num = (frase.length())-1;
        System.out.println(frase.substring(0, num));
    }
}
