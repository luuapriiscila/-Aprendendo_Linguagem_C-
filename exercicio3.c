#include <stdio.h>


int main(){
	float altura,peso_ideal;
	int sexo;
	
	printf("Digite a altura(em m):");
	scanf("%f", &altura);
	
	printf("Digite o sexo(1 para Feminino / 2 para Masculino):");
	scanf("%d", &sexo);
	
	if (sexo==1){
		peso_ideal = (72.7*altura)-58;
		printf("Seu peso ideal e: %.2f kg\n",peso_ideal);
	} else if (sexo==2){
		peso_ideal= (62.1*altura)-44.7;
		printf("Seu peso ideal e: %.2f kg\n",peso_ideal);
	}else{
		printf("Sexo invalido \n");
		return 0;
	}
	
	
}
