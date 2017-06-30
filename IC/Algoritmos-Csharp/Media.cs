using System;

class Calculator{

    public static void Main(){

        float G1 = 0;
        float G2 = 0;
        float Media = 0;
        string i = "";
        
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

            Console.WriteLine("Quer somar mais medias [sim/nao]: ");
            i = (Console.ReadLine());
            
        } while ( i != "sim");
        

    }



} 