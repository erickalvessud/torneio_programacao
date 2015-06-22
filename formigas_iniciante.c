#include<stdio.h>
#include<stdlib.h>

/*
Torneio de Programacao

Problema A: Matando Formigas

Descri��o
Durante o recreio das aulas, Jo�ozinho percebeu que uma
grande quantidade de formigas transitava entre os restos de
lanche dos alunos levando pequenas sobras para o
formigueiro. Entediado que estava com as aulas, Jo�ozinho
lembrou de suas aulas de F�sica e resolveu usar seus vastos
conhecimentos cient�ficos para reduzir a popula��o de
formigas a uma dist�ncia segura do formigueiro.
Correu at� o laborat�rio de F�sica a pegou algumas lentes
convergentes que, segundo seu professor, poderiam atear
fogo em uma folha de papel (ou queimar uma formiga)
concentrado os raios solares no alvo desejado. Seria
necess�rio apenas um dia de muito sol. Um dia como hoje!
Ainda segundo seu professor, bastaria colocar a lente � uma
dist�ncia do alvo aproximadamente igual ao foco da lente,
com uma diferen�a m�xima de uns 2 mil�metros.

Tarefa
Jo�ozinho, sempre pronto para a ci�ncia, foi testar estas
informa��es. Voc� consegue verificar quantas formigas
(pobres formigas) Jo�ozinho conseguir� queimar dados o
foco da lente usada por Jo�ozinho e a dist�ncia que as
formigas est�o deste, agora entusiasmado, cientista juvenil?
Se todo esse conhecimento e entusiasmo fosse utilizado
para o bem e n�o para o mal ...

Entrada
A primeira linha da entrada cont�m um n�mero inteiro �F�,
que determina o foco da lente usada por Jo�ozinho. Nas �N�
linhas seguintes, s�o dadas as dist�ncias �D� entre Jo�ozinho
(e sua lente) e as formigas. Todas as dist�ncias s�o dadas em
mil�metros. A entrada de dados se encerra com 0 (zero). Veja
o exemplo.

Restricoes
1 <= F <= 1000
1 <= N <= 100
1 <= D <= 2000

Sa�da
A sa�da consiste de uma �nica linha indicando a quantidade
de formigas queimadas por Jo�ozinho.

Exemplo
No exemplo a seguir, Jo�ozinho usou uma lente de 10 mm
tentando queimar 7 formigas que se moviam r�pido em
todas as dire��es. Apenas 5 delas ficaram a uma dist�ncia
apropriada para serem pulverizadas.

Exemplo de Entrada

10
8
7
9
5
8
12
11
0

Sa�da esperada para a Entrada

5 formiga (s)

*/
#define MIN_FOCO_LENTE 1
#define MAX_FOCO_LENTE 1000
#define QTD_MAX_DISTANCIA_INFORMADA 100

int main(){
	
	int focoLente = 0;
	int distancia = -1;
	int qtdFormigaMortas = 0;
	int n = 0;
	
	printf("Informe o foco da lente:\n");
	scanf("%d", &focoLente);
	
	if (focoLente >= MIN_FOCO_LENTE && focoLente <= MAX_FOCO_LENTE) {

		while (distancia != 0 && n < QTD_MAX_DISTANCIA_INFORMADA ){
			n++;
			
			printf("Informe a distancia que esta do alvo ou 0 se terminou:\n");
			scanf("%d", &distancia);
			
			if ( (focoLente - distancia) <= 2  &&  (focoLente - distancia) >= -2) {
				printf("FocoLente - distancia = %d\n", (focoLente - distancia));
				qtdFormigaMortas++;
			}
		}
		
		printf("Quantidade de formigas pulverizadas: %d\n", qtdFormigaMortas);
	} else {
		printf("Foco da lente deve ser >= %d ou <= %d", MIN_FOCO_LENTE, MAX_FOCO_LENTE);
	}
	system("pause");
	return 0;
}
