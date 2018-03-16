package Aula_4.Sexo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner ler = new Scanner(System.in);
        String frase, sexo = "sexo", sexual = "sexual";
        int so, sl;

        System.out.print("Escreva uma frase: ");
        frase = ler.nextLine();

        so = frase.indexOf(sexo);
        sl = frase.indexOf(sexual);

        if ((sl >= 0)|| (so >= 0)){
            System.out.println("Conteúdo Impróprio!!!");
        }else{
            System.out.println("Conteúdo Legal");
        }

    }
}
