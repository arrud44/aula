#include <stdio.h>
int main()
{
	int num, somaimpares = 0, somapares = 0, qtdpares = 0;
	float mediapares = 0;

	do
	{

		printf("Digite um numero: ");
		scanf("%d", &num);

		if (num % 2 == 0)
		{
			somapares = somapares + num;
			qtdpares++;
		}
		else
		{
			somaimpares = somaimpares + num;
		}
	} while (num != 0);

	mediapares = somapares / (qtdpares - 1);

	printf("Media dos pares: %f \n", mediapares);
	printf("Soma dos impares: %d \n", somaimpares);

	return 0;
}