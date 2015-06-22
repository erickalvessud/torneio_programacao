#include<stdio.h>
#include<stdlib.h>

/*
Torneio de Programacao

Problema A: Matando Formigas

Descricao
Durante o recreio das aulas, Joaozinho percebeu que uma
grande quantidade de formigas transitava entre os restos de
lanche dos alunos levando pequenas sobras para o
formigueiro. Entediado que estava com as aulas, Joaozinho
lembrou de suas aulas de Fisica e resolveu usar seus vastos
conhecimentos cientificos para reduzir a populacao de
formigas a uma distancia segura do formigueiro.
Correu ate o laboratorio de Fisica a pegou algumas lentes
convergentes que, segundo seu professor, poderiam atear
fogo em uma folha de papel (ou queimar uma formiga)
concentrado os raios solares no alvo desejado. Seria
necessario apenas um dia de muito sol. Um dia como hoje!
Ainda segundo seu professor, bastaria colocar a lente a uma
distancia do alvo aproximadamente igual ao foco da lente,
com uma diferenca maxima de uns 2 milimetros.

Tarefa
Joaozinho, sempre pronto para a ciencia, foi testar estas
informacoes. Voce consegue verificar quantas formigas
(pobres formigas) Joaozinho conseguira queimar dados o
foco da lente usada por Joaozinho e a distancia que as
formigas estao deste, agora entusiasmado, cientista juvenil?
Se todo esse conhecimento e entusiasmo fosse utilizado
para o bem e nao para o mal ...

Entrada
A primeira linha da entrada contem um numero inteiro "F",
que determina o foco da lente usada por Joaozinho. Nas "N"
linhas seguintes, sao dadas as distancias "D" entre Joaozinho
(e sua lente) e as formigas. Todas as distancias sao dadas em
milimetros. A entrada de dados se encerra com 0 (zero). Veja
o exemplo.

Restricoes
1 <= F <= 1000
1 <= N <= 100
1 <= D <= 2000

Saida
A saida consiste de uma unica linha indicando a quantidade
de formigas queimadas por Joaozinho.

Exemplo
No exemplo a seguir, Joaozinho usou uma lente de 10 mm
tentando queimar 7 formigas que se moviam rapido em
todas as direcoes. Apenas 5 delas ficaram a uma distancia
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

Saida esperada para a Entrada

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
