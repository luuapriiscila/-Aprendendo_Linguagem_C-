#include <stdio.h>

int main(){
	int segundo, minuto,hora,resto, seg_resto;
	
	printf("Informe o horario em segundos:");
	scanf("%d",&segundo);
	
	hora=segundo/3600;
	resto= segundo%3600;
	minuto= resto/60;
	seg_resto= resto%60;
	
	printf("-----HORARIOS------\n\n");
	printf("Hora:%d\n",hora);
	printf("Minuto:%d\n",minuto);
	printf("Segundo:%d\n",seg_resto);
	
	return 0;
}
