
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
public class Aposentadoria {
    public static void main(String [] args){
        String leitura;
        char sexo;
        int idade, tempoDeContribuicao;
        
        leitura = JOptionPane.showInputDialog("Digite o Sexo [m/f]: ");
        sexo = leitura.charAt(0);
        
        leitura = JOptionPane.showInputDialog("Digite a Idade: ");
        idade = Integer.parseInt(leitura);
        
        leitura = JOptionPane.showInputDialog("Digite o Tempo de Contribuição: ");
        tempoDeContribuicao = Integer.parseInt(leitura);
        
        if('f' == sexo){
            if((idade >= 60) || (tempoDeContribuicao >= 30)){
                System.out.println("Já tem direito a Aposentadoria");
            }else{
                System.out.println("Não tem direito a Aposentadoria");
            }
        }else{
            if((idade >= 65) || (tempoDeContribuicao >= 35)){
                System.out.println("Já tem direito a Aposentadoria");
            }else{
                System.out.println("Não tem direito a Aposentadoria");
            }   
        }
    }
}
