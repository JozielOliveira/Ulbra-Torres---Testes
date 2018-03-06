
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
public class Login {
    public static void main(String [] args){
        
        String login, senha;
        int tentativa = 0;
        Scanner ler = new Scanner(System.in);
        
        String loginOriginal = "java8";
        String senhaOriginal = "java8";
        
        do{
            if(tentativa > 0){
                System.out.println(tentativa+" Tentativas");
                System.out.println("Você errou login ou senha!!!");
            }
            
            System.out.print("Digite o Login: ");
            login = ler.next();
            
            System.out.print("Digite a senha: ");
            
            senha = ler.next();
            
            tentativa++;
            
        }while(((!login.equals(loginOriginal)) || (!senha.equals(senhaOriginal))) && (tentativa < 3));
        
        if(tentativa == 3){
            System.out.println("você usou as tres tentativas, espere um minuto e volte a tentar!!!");
        }else{
            System.out.println("Login efetuado com sucesso!!!");
        }
    }
}
