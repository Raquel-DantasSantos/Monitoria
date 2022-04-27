#include <stdio.h>

int main(){
	
int num1, num2, subtracao;

	printf("Digite um numero que gostaria de subtrair:");
	scanf("%d", &num1);
	
	printf("Digite um numero para a subtracao:");
	scanf("%d", &num2);
	
	subtracao = num1 - num2;
	
	printf("O resultado da subtracao e: %d ", subtracao);
	
	
	
	
	return 0;
	
}
