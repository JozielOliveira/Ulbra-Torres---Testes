package Aula_4;

public class Main {


    public static void main(String[] args) {

        System.out.println("Arredonda o Número");

        System.out.println(Math.ceil(2.9));
        System.out.println(Math.ceil(2.1));

        System.out.println(Math.round(2.9));
        System.out.println(Math.round(2.1));

        System.out.println(Math.floor(2.9));

        int s;

        System.out.println("Sorteio");

        s = (int) (Math.random() * 10);

        System.out.println(s);
    }
}
