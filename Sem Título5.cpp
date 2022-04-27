#include <stdio.h>
int main (){
	
	int num;
	
	printf("Digite um numero qualquer para descobrir se e par ou impar:");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("Este numero e par");
	}
	else{
		printf("Este numero e impar");
	}

	
	return 0;
}






