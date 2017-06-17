using System;

class CalculadoraMaster{

    public static void Main(){

        string Operacao = "";
        float N1     = 0;
        float N2     = 0;
        float Result = 0;

        do
        {
            Console.WriteLine("Digite a operacao que voce quer fazer: ");
            Operacao = Console.ReadLine();  

        } while (!( (Operacao=="+")  ||(Operacao=="-") || (Operacao=="*") || (Operacao=="/") ) );
        
        Console.WriteLine("Digite um Numero:");
        N1 = float.Parse(Console.ReadLine());

        Console.WriteLine("Digite um Numero:");
        N2 = float.Parse(Console.ReadLine());

        switch (Operacao)
        {
            case "+" : Result = N1 + N2;
            break;

            case "-": Result = N1 - N2;
            break;
            
            case "*" : Result = N1 * N2;
            break;
            
            default: Result = N1 / N2;
            break;
        }
        
        Console.WriteLine(" "+N1+" "+Operacao+" "+N2+" = "+ Result);
        Console.ReadLine();

    }

} 