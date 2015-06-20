#include<stdio.h>
#include<stdlib.h>

/*retorna valor absoluto de um numero*/
float absoluteValue(float num){
    if (num < 0) {
        num = num * -1;
    }
    return num;
}

int main(void){

    int i;
    float sobreposicaoDesejada = 5.19;
    float valorSobreposicao = 0;
    float maisProximo;
    int divisor = 2;
    int cartas = 1;
    
    valorSobreposicao += (1./divisor);
    maisProximo = sobreposicaoDesejada - valorSobreposicao;
    maisProximo = absoluteValue(maisProximo);

    printf("Primeiro menor: %f\n", maisProximo);
    for(;;){
        divisor++;
	printf("Valor do divisor: %d \n ", divisor);
        valorSobreposicao += 1./divisor;
        
        float valor = sobreposicaoDesejada - valorSobreposicao;
	
        valor =	absoluteValue(valor);

	printf("%d Valor:%f\n", cartas, valor);

        if (valor < maisProximo) {
	    cartas++;
            maisProximo = valor;
        }else {
	    break;
	}
    }

    printf("Mais proximo de %.2f eh: %f. Total de cartas: %d\n", sobreposicaoDesejada, maisProximo, cartas);

    return 0;
}
