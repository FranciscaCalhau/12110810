
#include <stdio.h>



void main ()
 {

	char caratere;
    int i, j, lado;

        printf("Qual o carater a desenhar\n ");
            scanf (" %c", &caratere);

        printf("Qual o tamanho dos lados\n ");
            scanf("%d", &lado);

        for (i = 1; i <= lado; i++) {

                for (j= 1; j <= lado; j++)
                printf("%c ", caratere);

            printf("\n");
        }
    }
 
      




