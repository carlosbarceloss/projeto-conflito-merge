#include<stdio.h>
#include <math.h>
main()
{
	// Declaração das variaveis
	int aulas;
	float g1,g2,media,freq,subst;
	
	// Solicitação de dados do teclado
	printf ("INFORME A NOTA DA G1: ");
	scanf ("%f", & g1);
	printf ("INFORME A NOTA DA G2: ");
	scanf ("%f", & g2);
	printf ("INFORME A QUANTIDADE DE AULAS MINISTRADAS: ");
	scanf ("%d", & aulas );
	
	//Calculos
	freq=(aulas*100)/68;
	media = (g1 + 2 *g2) / 3;

	//Blocos condicionais
	if (media >= 6 && freq >= 75)
		printf ("ALUNO APROVADO COM MEDIA IGUAL A: %f",media);
	else 
	{
		if (freq < 75) 
			printf ("ALUNO REPROVADO POR FREQUENCIA ");
		else {
			if (g1 >= g2) {
				printf ("INFORME A NOTA DE SUBSTITUIÇÃO DA G2: ");
				scanf ("%f", & subst);
				// Novo calculo de media
				media = (g1 + 2 * subst) / 3;
			}
			else  {
				printf ("INFORME A NOTA DE SUBSTITUIÇÃO DA G1: ");
				scanf ("%f", & subst);
				// Novo calculo de media 
				media = (subst + 2 * g2) / 3;
			}
			if (media >= 6) 
				printf ("ALUNO APROVADO POR SUBSTITUIÇÃO COM MEDIA IGUAL A: %f",media);
			else
				printf ("ALUNO NAO ATINGIU A NOTA PARA APROVAÇÃO. A MEDIA FOI DE: %f",media);
		}
	}
}
