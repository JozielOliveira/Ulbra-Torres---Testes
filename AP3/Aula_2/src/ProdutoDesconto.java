
import javax.swing.JOptionPane;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author joziel
 */
public class ProdutoDesconto {
   public static void main(String [] args){
       
       String nomeDoProduto, leitura;
       float valor;
       double desconto = 0, total;
       
        leitura = JOptionPane.showInputDialog("Digite o nome do produto: ");
        nomeDoProduto = leitura;
        
        do{
            
            leitura = JOptionPane.showInputDialog("Digite o valor do prouto: ");
            valor = Integer.parseInt(leitura);
            
            if(valor < 0){
                System.out.println("Voce digitou um numero menor que 0!!!!");
            }
            
        }while(valor < 0);
        
        if((valor >= 50) && (valor < 200)){
        
            desconto = 0.05 * valor;
        
        }else if((valor >= 200) && (valor < 500)){
        
            desconto = 0.06 * valor;
        
        }else if((valor >= 500) && (valor < 1000)){
        
            desconto = 0.07 * valor;
        
        }else if(valor > 1000){
            
            desconto = 0.08 * valor;
        
        }
        
        total = valor-desconto;
        
        System.out.println("Produto : "+ nomeDoProduto);
        System.out.println("Valor Anterior: "+valor);
        System.out.println("Valor com Desconto: "+total);
   } 
}
