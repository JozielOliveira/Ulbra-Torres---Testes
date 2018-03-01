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
public class Relampago {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in); 
        
        float velocidade_som_em_pes = 1100;
        float intervalo;
        
        System.out.print("O intervalo o momento que você viu o relâmpago até o momento em que você ouviu:");
        intervalo = ler.nextFloat();
        
        System.out.println(intervalo*velocidade_som_em_pes+" Pés");
        
    }
       
}
