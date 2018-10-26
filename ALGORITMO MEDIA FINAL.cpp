//DECLARAÇAO DAS VARIAVEIS!
#include<stdio.h>
#include<conio.h>
main()
{
int presenca;
float g1,g2,final,freq,subst;






//CALCULO PRONTO PARA SUBSTITUIR NOTA DO ALUNO - TEM QUE FAZER A ENTRADA!
if (g1>g2)
{
	final=(g1+(subst*2))/3;
}
else 
{
	final=(subst+(g2*2))/3;
}
if (final>6)
{
	printf("Voce foi aprovado com media %.2f apos a prova de substituiçao.",final)
}
else
{
	printf("Voce nao atingiu a media necessaria para aprovaçao. (media %f)",final)
}



