using System;

class CalculadoraTop{
    public static void Main(){
        
        string Comando = "";

        do{
            Console.WriteLine("--------Introdução a Computação--------");
            Console.WriteLine(" 1 - Calculadora");
            Console.WriteLine(" 2 - Média");
            Console.WriteLine(" 3 - Tabuada");
            Console.WriteLine(" 4 - IMC");
            Console.WriteLine(" 0 - Fechar");
            Console.WriteLine("---------------------------------------");

            do{ 
                Comando = Console.ReadLine();
            }while(ContinuaMenu(Comando));

            if (Comando != "0"){
                Console.Clear();
                Operacão(Comando);
            }

        } while (Comando != "0");
    }

//--------------------------------------------------
    static bool ContinuaMenu(string Comando){
        if((Comando != "1") & (Comando != "2") & (Comando != "3") & (Comando != "4") & (Comando != "0")){
            Console.WriteLine("Comando errado");
            return true;
        }else{
            return false;
        }
    }
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

            Result = OperacaoAritimetica(N1,N2,Operacao);
            
            Console.WriteLine(" "+N1+" "+Operacao+" "+N2+" = "+ Result);

        } while (ContinuaWhile("a Calculadora"));         

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
            
        } while (ContinuaWhile("a Media"));

        return true;

    }

    static bool Tabuada(){     
        do{
            
            int Tabuada = 0;

            Console.WriteLine("Qual a tabuada você quer saber:");
            Tabuada = int.Parse(Console.ReadLine());

            
                for(int cont = 0; 10 >= cont; cont++){

                    Console.WriteLine(Tabuada+" x "+cont+" = "+ OperacaoAritimetica(Tabuada,cont,"*"));

                } 

        } while (ContinuaWhile("a Tabuada")); 

        return true;
    }

    static bool IMC(){
        do{
            float peso = 0;
            float altura = 0;
            double imc = 0;

            Console.WriteLine("Qual a altura: ");
            altura = float.Parse(Console.ReadLine());
            Console.WriteLine("Qual o peso:");
            peso = float.Parse(Console.ReadLine());

            imc = peso/Math.Pow(2,altura);
            
            if(imc<18.5){
                Console.WriteLine("Abaixo do peso ideal  "+Math.Round(imc, 1));
            }else if(imc<25){
                Console.WriteLine("Peso ideal  "+Math.Round(imc, 1));
            }else if(imc<30){
                Console.WriteLine("Acima do Peso  "+Math.Round(imc, 1));
            }else{
                Console.WriteLine("Obeso  "+Math.Round(imc, 1));
            }

        } while (ContinuaWhile("o IMC")); 
        
            return true;
    }

    static float OperacaoAritimetica(float N1,float N2,string Operacao){
        switch (Operacao)
        {
            case "+" : return N1 + N2;

            case "-": return N1 - N2;
            
            case "*" : return N1 * N2;
            
            default: return N1 / N2;
        }
    }

    static bool ContinuaWhile(string operacao){
            string Comando = "";

            Console.WriteLine("Digite um 'voltar' para voltar ao Menu e de Enter");
            Console.WriteLine("Ou apenas de enter para continuar com "+operacao);    
            Comando = Console.ReadLine();
            Console.Clear();

            if(Comando != "voltar"){
                return true;
            }else{
                return false;
            }
    }

}