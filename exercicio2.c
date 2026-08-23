#include <stdio.h>

int main(){
	float salario, prestacao, limite;
	
	printf("Digite o seu Salário:");
	scanf("%f",&salario);
	
	printf("Digite o valor da Prestação:");
	scanf("%f",&prestacao);
	
	limite = salario*0.2;
	
	if (prestacao>limite){
		printf("Empréstimo Não Concedido\n");
	}else{
		printf("Empréstimo Concedido\n");
	}
	
	return 0;
	
	
	
}
