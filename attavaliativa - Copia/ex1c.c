/*
	atividade 1 de algoritmos (1.0)

	imagine que a disciplina de algoritmos possui estudantes do curso de BSI e do curso de ADS
	o professor precisa lancar as notas de todos os estudantes, mas gerar estatisticas separadas para cada curso
	se o estudante tirar mais que 7.0 ele eh aprovado, se tirar menos que 3.0 ele eh reprovado, caso contrario fica de final
	implemente um programa em que o usuario possa inserir uma quantidade qualquer de notas
	o programa deve comecar exibindo uma mensagem de boas-vindas e explicando o que o usuario deve fazer
	ao inserir cada nota o usuario devera informar tambem o curso do estudante
	nao eh permitido inserir primeiro os de um curso e depois do outro, as notas devem poder ser inseridas em qualquer ordem
	apos todas as notas terem sido inseridas, o programa deve informar:

		-
		- quantos estudantes de cada curso ficaram de final
		-
		-
		-

	por fim o programa deve perguntar se o usuario quer repetir o processo, caso sim voltar ao inicio, caso nao deve se despedir e encerrar
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota_ads;
	float nota_bsi;
	float contador;
	float ads;
	float bsi;
	float opcao;
	int alunos_ads;

	int curso_maior_media;

	int ads_aprovados = 0;
	int ads_reprovados = 0;
	float media_ads;
	float total_nota_ads = 0;
	int aluno_refazads = 0;
	float percentual_alunos_aprovados_ads;
	float nota_ads_acimanove;
	int alunosads_zerados;

	int bsi_aprovados = 0;
	int bsi_reprovados = 0;
	int soma_alunos;
	float media_bsi;
	float total_nota_bsi = 0;
	int aluno_refazbsi = 0;
	float percentual_alunos_aprovados_bsi;
	float nota_bsi_acimanove;
	int alunosbsi_zerados;

	printf("Bem-vindo ao sistema de lançamento de notas!\n");
	printf("Para inserir uma nota, digite 1 para ADS.\n");
	printf("Para inserir uma nota, digite 2 para BSI.\n");
	printf("Digite 3 para encerrar o programa.\n");
	scanf("%f", &opcao);
	while (opcao != 3)
	{

		if (opcao == 1)
		{
			printf("Você escolheu o sistema para ADS!\n");
			printf("Digite a nota do aluno: \n");
			scanf("%f", &nota_ads);
			total_nota_ads = nota_ads + total_nota_ads;
			if (nota_ads > 7)
			{
				printf("Alunos aprovados");
				if (nota_ads > 9)
				{
					nota_ads_acimanove++;
				}
				ads_aprovados++;
			}
			else if (nota_ads < 3)
			{
				printf("Alunos reprovados");
				ads_reprovados++;
				if (nota_ads == 0)
				{
					alunosads_zerados++;
				}
			}
			else
			{
				aluno_refazads++;
			}
			break;
			;
		}
		if (opcao == 2)

		{
			printf("Você escolheu o sistema para ADS!\n");
			printf("Digite a nota do aluno: \n");
			scanf("%f", &nota_bsi);
			total_nota_bsi = nota_bsi + total_nota_bsi;
			if (nota_bsi > 7)
			{
				printf("Alunos aprovados");
				if (nota_bsi > 9)
				{
					nota_bsi_acimanove++;
				}
				bsi_aprovados++;
			}
			else if (nota_bsi < 3)
			{
				printf("Alunos reprovados");
				bsi_reprovados++;
				if (nota_bsi == 0)
				{
					alunosbsi_zerados++;
				}
			}
			else
			{
				aluno_refazbsi++;
			}
		}
	}
	soma_alunos = ads_aprovados + ads_reprovados + aluno_refazads;
	media_ads = total_nota_ads / soma_alunos;
	printf("A media da turma de ADS é: %f", media_ads);
	printf("O total de alunos reprovados em ads é: %i", ads_reprovados);
	printf("O total de alunos aprovados em ads é: %i", ads_aprovados);
	printf("O tatal de alunos que vão fazer a final: ", aluno_refazads);
	printf("O total de alunos em ADS é: ", soma_alunos);

	percentual_alunos_aprovados_ads = soma_alunos / ads_aprovados;
	printf("O percentual de alunos aprovados é: %f", percentual_alunos_aprovados_ads);

	printf("O total de alunos acima de nove é: %f", nota_ads_acimanove);

	printf("O total de alunos zerados é: %i", alunosads_zerados);

	printf("O total de alunos que tem que refazer a prova é: %i", aluno_refazads);

	soma_alunos = bsi_aprovados + bsi_reprovados + aluno_refazbsi;
	media_bsi = total_nota_bsi / soma_alunos;
	printf("A media da turma de ADS é: %f", media_bsi);
	printf("O total de alunos reprovados em ads é: %i", bsi_reprovados);
	printf("O total de alunos aprovados em ads é: %i", bsi_aprovados);
	printf("O tatal de alunos que vão fazer a final: %i", aluno_refazbsi);
	printf("O total de alunos em ADS é: %i", soma_alunos);

	percentual_alunos_aprovados_bsi = soma_alunos / bsi_aprovados;
	printf("O percentual de alunos aprovados é: %f", percentual_alunos_aprovados_bsi);

	printf("O total de alunos acima de nove é: %f", nota_bsi_acimanove);

	printf("O total de alunos zerados é: %i", alunosbsi_zerados);

	printf("O total de alunos que tem que refazer a prova é: %i", aluno_refazbsi);

	return 0;
}
