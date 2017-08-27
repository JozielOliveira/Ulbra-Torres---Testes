#include <stdio.h>
main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%i",&idade);

    if(idade > 18 && idade < 60){
        printf("Voto Obrigatorio");
    }else{
        printf("Voto nao Obrigatorio");
    }
}
