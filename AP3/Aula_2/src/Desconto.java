
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author joziel
 */
public class Desconto {
    public static void main(String[] args){
        
        float valor;
        float valor_desconto;
        float desconto;
        
        Scanner ler = new Scanner(System.in);
        
        System.out.print("Digite o valor do produto: ");
        valor = ler.nextFloat();
        
        System.out.print("Digite o desconto '%': ");
        desconto = ler.nextInt();
        
        valor_desconto = valor * (desconto / 100);
        valor -= valor_desconto;
        
        System.out.println("Desconto: R$"+valor_desconto);
        System.out.println("Valor Total: R$"+valor);
    }
}
