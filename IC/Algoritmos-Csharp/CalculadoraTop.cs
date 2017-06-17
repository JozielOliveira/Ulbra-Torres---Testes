using System;

class CalculadoraTop{
    public static void Main(){
        
        string Comando = "";

        do{
            Escrever("--------Introdução a Computação--------");
            Escrever(" 1 - Calculadora");
            Escrever(" 2 - Média");
            Escrever(" 3 - Tabuada");
            Escrever(" 4 - IMC");
            Escrever(" 0 - Fechar");
            Escrever("---------------------------------------");

            do{
                Comando = Ler();
            }while((Comando != "1") & (Comando != "2") & (Comando != "3") & (Comando != "4") & (Comando != "0"));

            if (Comando != "0"){
                Console.Clear();
                Operacão(Comando);
            }

        } while (Comando != "0");
    }

//--------------------------------------------------
    static bool Operacão(string Operacao){
        switch (Operacao)
        {
            case "1":  return Calculadora();
            
            case "2":  return Media();
            
            case "3": return Tabuada();
            
            default: return IMC();
        }
    }

    static bool Calculadora(){  
        do{
                
            string Operacao = "";
            float N1     = 0;
            float N2     = 0;
            float Result = 0;

            do{
                Console.WriteLine("Digite a operacao que voce quer fazer: ");
                Operacao = Console.ReadLine();  

            } while (!( (Operacao == "+")  ||(Operacao == "-") || (Operacao == "*") || (Operacao == "/") ) );
            
            Console.WriteLine("Digite um Numero:");
            N1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Digite um Numero:");
            N2 = float.Parse(Console.ReadLine());

            Result = OperacãoAritimetica(N1,N2,Operacao);
            
            Console.WriteLine(" "+N1+" "+Operacao+" "+N2+" = "+ Result);

        } while (ContinuaWhile());         

        return true;
    }

    static bool Media(){

        float G1 = 0;
        float G2 = 0;
        float Media = 0;

        do
        {   
            Console.WriteLine("Digite a nota da G1: ");
            G1 = float.Parse(Console.ReadLine());
            Console.WriteLine("Digite a nota da G2: ");
            G2 = float.Parse(Console.ReadLine());

            Media = (G1 + G2*2)/3;
                
            if (Media>=6){
                Console.WriteLine("Parabéns sua Média é " + Media);
            }else{
                Console.WriteLine("Estuda mais pois sua Média é " + Media); 
            }
            
        } while (ContinuaWhile());

        return true;

    }

    static bool Tabuada(){     
        do{
            
            int Tabuada = 0;

            Console.WriteLine("Qual a tabuada você quer saber:");
            Tabuada = int.Parse(Ler());

            
                for(int cont = 0; 10 >= cont; cont++){

                    Escrever(Tabuada+" x "+cont+" = "+ OperacãoAritimetica(Tabuada,cont,"*"));

                } 

        } while (ContinuaWhile()); 

        return true;
    }

    static bool IMC(){
        do{
            float peso = 0;
            float altura = 0;
            double imc = 0;

            Console.WriteLine("Qual a altura: ");
            altura = float.Parse(Ler());
            Console.WriteLine("Qual o peso:");
            peso = float.Parse(Ler());

            imc = peso/Math.Pow(2,altura);
            
            if(imc<18.5){
                Escrever("Abaixo do peso ideal  "+Math.Round(imc, 1));
            }else if(imc<25){
                Escrever("Peso ideal  "+Math.Round(imc, 1));
            }else if(imc<30){
                Escrever("Acima do Peso  "+Math.Round(imc, 1));
            }else{
                Escrever("Obeso  "+Math.Round(imc, 1));
            }

        } while (ContinuaWhile()); 
        
            return true;
    }

    static float OperacãoAritimetica(float N1,float N2,string Operacao){
        switch (Operacao)
        {
            case "+" : return N1 + N2;

            case "-": return N1 - N2;
            
            case "*" : return N1 * N2;
            
            default: return N1 / N2;
        }
    }

    static bool ContinuaWhile(){
            string Comando = "";

            Escrever("Digite um 'voltar' para voltar ao inicio");
            Escrever("De enter para continuar com a tabuada");    
            Comando = Ler();
            Console.Clear();

            if(Comando != "voltar"){
                return true;
            }else{
                return false;
            }
    }

//------------------------COMANDOS AUXILIARES-----------------------------------//

    static void Escrever(string ParTexto){
        Console.WriteLine(ParTexto);
    }

    static string Ler(){
        return Console.ReadLine();
    }

    static void Parar(){
        Console.ReadLine();
    }

}