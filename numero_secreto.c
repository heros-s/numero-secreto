#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int secret = rand() % 100;
    int numero = 0;

    printf("\nO sistema gerara um numero aleatorio de 0 a 100,\ne voce tera que adivinha-lo aperte ENTER para iniciar.");
    getchar();

    for(int i = 1 ; i < 11 ; i++)
    {
        printf("\n\nTentativa %i, digite um numero: ", i);
        scanf("%i", &numero);
        if(numero > secret)
        {
            printf("Muito alto, digite um numero menor.");
        }
        else if(numero < secret)
        {
            printf("Muito baixo, digite um numero maior.");
        }
        else
        {
            printf("Parabens! Voce acertou.");
            return 0;
        }
    }

    printf("\nVoce perdeu");

    return 0;
}