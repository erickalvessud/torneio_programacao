#include<stdio.h>
#include<stdlib.h>

int main(void){

  int qtdAdversario;
  int qtdPartida;
  int i;
  int j;

  scanf("%d %d", &qtdAdversario, &qtdPartida);

  int partidas[qtdAdversario][qtdPartida];
  int totais[qtdAdversario];

  for (i = 0; i < qtdAdversario; i++) {
    totais[i] = 0;
  }

  for (i = 0; i < qtdAdversario; i++ ) {
    
    for (j = 0; j < qtdPartida; j++ ) {
      scanf("%d", &partidas[i][j]);
    }
  }

  for (i = 0; i < qtdAdversario; i++ ) {
    for (j = 0; j < qtdPartida; j++) {
      totais[i] += partidas[i][j];
    }
  }

  // 10 2 5 1 3
  // 0  1 2 3 4

  // 0 > 1 ?
  // 2 10 5 1 3

  // 1 > 2
  // 2 5 10 1 3

  // 2 > 3
  // 2 5 1 10 3

  int temp = 0;
  for(i = qtdAdversario - 1; i >= 1; i-- ) {
    for (j = 0; j < i; j++ ){
      if(totais[j] > totais[j + 1]){
	temp = totais[j];
	totais[j] = totais[j + 1];
	totais[j + 1] = temp;
      }
    }
  }

  printf("%d", totais[3] + 1);

  return 0;
}

