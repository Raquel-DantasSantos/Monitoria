/*informar a idade!
0-3 -> bebê
4-10 -> criança
11-17 -> adolescente
18-40 -> adulto
41-60 -> adulto 2
61 ... -> idoso*/

#include <stdio.h>

int main (){
	
	int idade;
	
	printf("Digite a sua idade:");
	scanf("%d", &idade);
	
	if (idade >= 0 && idade <= 3){
		printf("E um bebe");
	}
	else if(idade >= 4 && idade <= 10){
		printf("E uma crianca");
	}
	else if(idade >= 11 && idade <= 17){
		printf("E um adolescente");	
	}
	else if(idade >= 18 && idade <= 40){
		printf("E um adulto");
	}
	else if(idade >= 41 && idade <= 60){
		printf("E um adulto 2");
	}
	else if(idade >= 61 && idade <= 100) {
		printf("idoso");
	}
	else{
		printf("Idade invalida!");
	}
	
	return 0;
}







