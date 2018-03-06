
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
public class ITBI {
     public static void main(String[] args){
         
        float valorDeTransacao, valorVenal, valorImposto, maiorValor, percentualDeImposto;
        Scanner ler = new Scanner(System.in);
        
         System.out.print("Digite o valor de transação: ");
         valorDeTransacao = ler.nextFloat();
         
         System.out.print("Digite o valor venal: ");
         valorVenal = ler.nextFloat();
         
         System.out.print("Digite o percentual de imposto '%'");
         percentualDeImposto = ler.nextInt();
         
         if(valorDeTransacao > valorVenal){
             maiorValor = valorDeTransacao;
         }else{
             maiorValor = valorVenal;
         }
         
         valorImposto = maiorValor * (percentualDeImposto / 100);
         
         System.out.println("Valor do Imposto "+valorImposto);
         
    }   
}
