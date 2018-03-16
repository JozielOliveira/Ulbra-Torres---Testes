package Aula_4.Farmacia;

import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        DecimalFormat money = new DecimalFormat();
        long valor;
        Scanner ler = new Scanner(System.in);
        money.applyPattern("R$ #,###.00");

        do {

            System.out.println("Caso queira encerrar o programa digite 0 e de enter.");
            System.out.print("Digite o valor do produto a ser acrecentado os 12%: ");

            valor = ler.nextLong();
            valor *= 1.12;
            valor = Math.round(valor);

            if(valor == 0) break;

            System.out.println(money.format(valor));

        }while(valor != 0);

    }
}