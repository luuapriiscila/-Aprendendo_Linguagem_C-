#include <stdio.h>
int main(){
    float nota1;
    float nota2;
    float nota3; 
    
    printf("Informe a nota 1:");
    scanf("%f", &nota1);
    
    printf("Informe a nota 2:");
    scanf("%f", &nota2);
    
    printf("Informe a nota 3:");
    scanf("%f", &nota3);
    
   float media = (nota1+nota2+nota3)/3;
    
    if (media >= 6)
    printf("Aprovado.");
    else
    printf("Reprovado");
    
    return 0;
}
