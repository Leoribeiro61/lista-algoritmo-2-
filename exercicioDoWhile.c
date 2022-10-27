#include <stdio.h>
int main(){
    int validarInteiro; // valido de 1 a 10
    float validarReal; // valido de 1 a 9.9
    char validarCaracter; // valido apenas letra 'a' 'A'

    //imprimir as variáveis 
    do{
        printf("Digite um numero inteiro: \n");
        scanf("%d", &validarInteiro); 
    } while (validarInteiro<1 || validarInteiro>10); 
    do{
        printf("Digite um numero real: \n");
        scanf("%f", &validarReal); 
    } while (validarReal<1 || validarReal>9.9);
    
    do{
    	fflush(stdin);
        printf("Digite um caracter: ");
        scanf("%c", &validarCaracter);
    } while (validarCaracter != 'a');
    
}