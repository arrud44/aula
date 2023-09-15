#include <stdio.h>

int count = 10;
while (count < = 10)
{
    if ((count%2=0))
    {    
    printf("%i",count);
    }
    count++;
}
for (int count = incio; count < = fim; count++)
{
    if (count%2==0)
    {
    printf("%i\n",count);
    }
}
for (int count =  2; count <= 10; count +-)
{
    printf("insira o inicio: ");
    int inicio = 0;
    scanf("%i",&inicio);
    printf("insira o fim: ");
    int fim = 0;
    scanf("%i",&fim);
}
if(inicio > fim){
    int temp = inicio;
    inicio = fim;
    fim = temp;
}
while (inicio > fim)
{
    printf("entradas invalidas,...");
    scanf("%i",&inicio);
    scanf("%i",&fim);
    
}
 //teste 2 do while

int inicio = 0;
int fim = 0;
do
{   
    if (inicio > fim)
    {
        printf("entradas invalidas");
    }

    printf("digite inicio");
    scanf("%i",&inicio);
    printf("digite o fim...");
    scanf("%i",&fim);

} while (inicio > fim);

//teste 3 laço infinito

int inicio = 0;
int fim = 0;

while (1==1)
{
    printf("insira inicio");
    scanf("%i",&inicio);
    printf("insira o fim");
    scanf("%i",&fim);
    if (inico <= fim)
    {
        break;
    }
    else{
        printf("entradas invalidas");
    }
}




int inicio = 0;
int fim = 0;
int multiplo = 0;

while (1==1)
{
    printf("insira inicio");
    scanf("%i",&inicio);
    printf("insira o fim");
    scanf("%i",&fim);
    if (inico <= fim)
    {
        break;
    }
    else{
        printf("entradas invalidas");
    }

    while (1)
    {
    
    
    printf("insira multiplo");
    scanf("%i",&multiplo);
    if(multiplo>0)
        break;
    }
    else
    {
        printf("multiplo invalido");
    
    }
   for (int count =  inicio; count <= fim; count +-)
    {
        if(count%multiplo ==0)
        printf("%i\n",count);
    }
}
return 0
