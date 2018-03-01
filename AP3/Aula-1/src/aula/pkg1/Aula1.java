/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula.pkg1;

import java.util.Scanner;

/**
 *
 * @author joziel
 */
public class Aula1 {
    
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in); 
        
        float peso;
        System.out.println("Digite o Peso: ");
        peso = ler.nextFloat();
        
        peso *= 0.17;
        
        System.out.println(peso);
    }
    
}
