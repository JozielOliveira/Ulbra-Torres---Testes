using System;

class CalculadoraMaster{

    public static void Main(){
        string Comando = "";
        do{
            
            int Tabuada = 0;

            Console.WriteLine("Qual a tabuada você quer saber:");
            Tabuada = int.Parse(Ler());

            
                for(int cont = 0; 10 >= cont; cont++){

                    Escrever(Tabuada+" x "+cont+" = "+ Multiplicacao(Tabuada,cont));

                } 
                 
            Escrever("Digite um 'Fechar' para encerrrar");
            Escrever("De enter para continuar");
            Comando = Ler();

        } while (Comando != "fechar");

    
    }


    static void Escrever(string ParTexto){
        Console.WriteLine(ParTexto);
    }

    static string Ler(){
        return Console.ReadLine();
    }

    static int Multiplicacao(int X, int Y){
        return X*Y;
    }

    static void Parar(){
        Console.ReadLine();
    }
    
}