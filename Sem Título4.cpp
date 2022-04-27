// *   /
//que multiplique dois numeros e depois pegue ao resultado dessa mult e divida por 2

#include <stdio.h>

int main (){
	
	int num1, num2, multiplicacao, divisao;
	
    printf("Digite um numero para a multiplicacao:");
    scanf("%d", &num1);
	 
	printf("Digite o segundo numero da multiplicacao:");
	scanf("%d", &num2);
	
	multiplicacao = num1 * num2;
	
	printf("O resultado da multiplicacao e: %d", multiplicacao);
	
	divisao = multiplicacao / 2;
	
	printf("A multiplicacao divido por 2 e: %d", divisao);
	
	
	return 0;
}
