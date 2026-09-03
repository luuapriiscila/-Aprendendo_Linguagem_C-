#include <stdio.h>

int main(){
	float tamanhoQuadrado, litros, precoTotal;
	int latas;
	
	printf("Qual o tamanho em m da area a ser pintada:");
	scanf("%f",&tamanhoQuadrado);
	
	litros =tamanhoQuadrado/3;
	
	//CALCULA A PARTE INTEIRA DOS LITROS
	latas = (int) (litros/18);
	
    //houver resto, precisamos de mais uma lata completa
    if (litros > (latas * 18)) {
        latas = latas + 1;
    }
	precoTotal= latas*80;
	
	printf("Quantidade de litros necessária: %.2f litros\n",litros);
	printf("Quantidade de latas: %d\n", latas);
	printf("Preço total: R$ %.2f\n",precoTotal);
	
	return 0;
	
}
