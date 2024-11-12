
#include <stdio.h>

void desenharUmQuadrado (char C, int N)
 {
   

        for (int i = 1; i <= N; i++) {

                for (int j= 1; j <= N; j++)
                   printf("%c ", C);

                printf("\n");
        }
           
 }
    
void main ()
{
    char caratere;
    int lado;

    printf("Qual o carater a desenhar? \n");
        scanf("%c", &caratere);

    printf("Qual o tamanho do lados? \n");
        scanf("%d", &lado);

    desenharUmQuadrado (caratere, lado);

    //Exemplos de chamar a funcao ....
    desenharUmQuadrado ('*', 10);
    desenharUmQuadrado ('A', 2*3);
    
 }



