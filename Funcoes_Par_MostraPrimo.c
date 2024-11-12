#include <stdio.h>

// Prototipo de funcao

void mudaLinha(void);

int eNumPrimo (int num);

int eNumPar (int num);

void mostraPrimos(int limiteInferior, int limiteSuperior);

void mostraPares(int limiteInferior, int limiteSuperior);

//programa principal
int main() 
{
    int limiteInferior = 0, limiteSuperior = 0;
    
    printf("Introduza dois numeros separado por '-': ");
    scanf("%d-%d", &limiteInferior, &limiteSuperior);

        mudaLinha();

    printf("os numeros primos entre %d e %d sao: ", limiteInferior, limiteSuperior );
     mostraPrimos(limiteInferior, limiteSuperior);

         mudaLinha();

    printf("os numeros pares entre %d e %d sao: ", limiteInferior, limiteSuperior) ;
    mostraPares(limiteInferior, limiteSuperior);

        
    return 0;
}

//funcao que verifica se o numero e primo

int eNumPrimo (int num) {

        int devolve = 1;
        int i;

        for ( i = 2;  i <= num/2; i++)
        {
        if(num % i == 0)
        { 
            devolve = 0;
        } 
                
    }
    return devolve;
}
//funcao que mostra todos os numeros primos entre o limite definido
   void mostraPrimos(int limiteInferior, int limiteSuperior)
{
    while(limiteInferior <= limiteSuperior)
    {
        if(eNumPrimo ( limiteInferior)) 
        {
            printf("%d ", limiteInferior);
        }
        limiteInferior++;
    }
}

//funça~mque verifica se o numero e par

int eNumPar (int num)
{
int i;
int devolve = 0;

for (i = 2; i < num; i++)
{
    if (num % 2 == 0)
    {
        devolve = 1;
    }
    return devolve;
}

}

//funcao que mostra todos os numeros pares entre o limite definido
   void mostraPares(int limiteInferior, int limiteSuperior)
{
    while(limiteInferior <= limiteSuperior)
    {
        if(eNumPar ( limiteInferior)) 
        {
            printf("%d ", limiteInferior);
        }
        limiteInferior++;
    }
}
    












