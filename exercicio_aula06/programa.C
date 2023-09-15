#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int valor = rand() % 100;
    int entrada = 0;
    int contador = 0;
    do
    {

        printf("Digite o valor: ");
        scanf("%i", &entrada);

        if (entrada < valor)
        {
            printf("o valor esta muito baixo");
            contador++;
        }
        else if (entrada > valor)
        {
            printf("o valor esta muito alto!");
            contador++;
        }
        else if (entrada == valor)
        {
            printf("O valor esta correto!");
            break;
        }
        if (contador == 10)
        {
            printf("o limite de numeros foi atingido!");
            break;
        }
    } while (1);
}
