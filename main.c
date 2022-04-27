#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero1, numero2, soma;
	
	
	printf("Digite um numero:");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero:");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	
	printf("O resultado da soma e %d", soma);
	
	return 0;
}
