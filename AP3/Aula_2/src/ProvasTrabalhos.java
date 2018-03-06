
import java.util.Scanner;
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
public class ProvasTrabalhos {
    public static void main(String [] args){
        
        float prova1, prova2, trabalho, media;
        String leitura;
        
        leitura = JOptionPane.showInputDialog("Digite a nota da 1º prova: ");
        prova1 = Float.parseFloat(leitura);
        
        leitura = JOptionPane.showInputDialog("Digite a nota da 2º prova: ");
        prova2 = Float.parseFloat(leitura);
        
        leitura = JOptionPane.showInputDialog("Digite a nota do trabalho: ");
        trabalho = Float.parseFloat(leitura);
        
        media = (prova1 + prova2 + trabalho)/3;
        
        if(media >= 6){
            System.out.println("Aprovado");
            System.out.println("Media: "+media);
        }else{
            System.out.println("Reprovado");
            System.out.println("Media "+media);
        }
    }
    
}
