package Aula_4.Jogo_Dado;

public class Main {
    public static void main(String[] args) {

        int dado;
        int soma = 0;

        System.out.println("Jogo de Dado");

        for (int i = 0; i < 3; i++) {

            dado = (int) (1 + Math.random() * 6);

            System.out.println((i+1)+"ºJogada = "+dado);

            soma += dado;

        }

        System.out.println("Total = "+soma);
    }
}