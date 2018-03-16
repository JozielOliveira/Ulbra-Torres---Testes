package Aula_4.Senha;

public class Main {
    public static void main(String[] args) {

        int num;
        int a;
        String senha= "Senha: ";

        num = (int)(5 + Math.random()*5);

        System.out.println("Número de dígitos: "+num);

        for (int i = 0; i < num; i++){
            a = (int) (Math.random() * 10);

            System.out.println(a);

            senha += a;
        }

        System.out.println(senha);

    }
}
