#include<stdio.h>
#include<stdlib.h>

/*
Torneio de Programacao

Problema A: Matando Formigas

Descrição
Durante o recreio das aulas, Joãozinho percebeu que uma
grande quantidade de formigas transitava entre os restos de
lanche dos alunos levando pequenas sobras para o
formigueiro. Entediado que estava com as aulas, Joãozinho
lembrou de suas aulas de Física e resolveu usar seus vastos
conhecimentos científicos para reduzir a população de
formigas a uma distância segura do formigueiro.
Correu até o laboratório de Física a pegou algumas lentes
convergentes que, segundo seu professor, poderiam atear
fogo em uma folha de papel (ou queimar uma formiga)
concentrado os raios solares no alvo desejado. Seria
necessário apenas um dia de muito sol. Um dia como hoje!
Ainda segundo seu professor, bastaria colocar a lente à uma
distância do alvo aproximadamente igual ao foco da lente,
com uma diferença máxima de uns 2 milímetros.

Tarefa
Joãozinho, sempre pronto para a ciência, foi testar estas
informações. Você consegue verificar quantas formigas
(pobres formigas) Joãozinho conseguirá queimar dados o
foco da lente usada por Joãozinho e a distância que as
formigas estão deste, agora entusiasmado, cientista juvenil?
Se todo esse conhecimento e entusiasmo fosse utilizado
para o bem e não para o mal ...

Entrada
A primeira linha da entrada contém um número inteiro “F”,
que determina o foco da lente usada por Joãozinho. Nas “N”
linhas seguintes, são dadas as distâncias “D” entre Joãozinho
(e sua lente) e as formigas. Todas as distâncias são dadas em
milímetros. A entrada de dados se encerra com 0 (zero). Veja
o exemplo.

Restricoes
1 <= F <= 1000
1 <= N <= 100
1 <= D <= 2000

Saída
A saída consiste de uma única linha indicando a quantidade
de formigas queimadas por Joãozinho.

Exemplo
No exemplo a seguir, Joãozinho usou uma lente de 10 mm
tentando queimar 7 formigas que se moviam rápido em
todas as direções. Apenas 5 delas ficaram a uma distância
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

Saída esperada para a Entrada

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
