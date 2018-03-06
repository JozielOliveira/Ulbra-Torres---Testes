
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
public class Circuito {
    public static void main(String [] args){
        
        int resistencia = 0, maiorRes = 0, menorRes = 100, total = 0;
        String leitura;
        
        for(int i = 0; i < 4; i++){
             leitura = JOptionPane.showInputDialog("Digite da "+(i+1)+"º resistência: ");
             resistencia = Integer.parseInt(leitura);
             
             if(resistencia > maiorRes){
                 maiorRes = resistencia;
             }
                if(resistencia < menorRes){
                 menorRes = resistencia;
             }
             
             total += resistencia;
        }
        System.out.println("Resistencia Equivalente: "+total);
        System.out.println("Menor Resistencia: "+menorRes);
        System.out.println("Maior Resistencia: "+maiorRes);
    }
}
