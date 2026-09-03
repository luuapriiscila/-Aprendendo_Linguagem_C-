#include <stdio.h>

int main(){
	float alcool, gasolina, vendidos, total;
	char tipo, A, G;
	
	printf("Qual tipo de combustivel foi solicitado?(A-alcool e G-gasolina):");
	scanf("%c", &tipo); 
	
	alcool = 1.9;
	gasolina = 2.5;
	
	//lógica do álcool
	if (tipo == 'A') {
        printf("----ALCOOL----\n");
        printf("Quantos litros foram vendidos de Alcool? ");
        scanf("%f", &vendidos);
        
        if (vendidos <= 20) {
            total = (vendidos * alcool) * (1 - 0.03);; // Exemplo de calculo com desconto
        } else {
            total = (vendidos * alcool) * (1 - 0.05);
        }
    } 
    else if (tipo == 'G') { //lógica da Gasolina
        printf("----GASOLINA----\n");
        printf("Quantos litros foram vendidos de Gasolina? ");
        scanf("%f", &vendidos);
        
        if (vendidos <= 20) {
            total = (vendidos * gasolina) * (1 - 0.04);
        } else {
            total = (vendidos * gasolina) * (1 - 0.06);
        }
    }

    printf("--------Situacao--------\n\n");
    if (tipo == 'A'){
    	printf("Voce escolheu:....Alcool\n");
	} else{
		printf("Voce escolheu:....Gasolina\n");
	}
    printf("Litros:.... %.2f L\n",vendidos);
	printf("O valor a ser pago e:.... R$ %.2f\n", total);

    return 0;
}
