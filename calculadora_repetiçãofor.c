/* usando switch case , solicite do usuario a operacao, utilizando char,
e faca os calculos soma, subtracao, multiplicacao, divisao, potencia e raiz*/ 

#include <stdio.h> //biblioteca - printf e scanf
#include <math.h>
int main(){  // iniciando algoritmo
    float num1 , num2, resultado;
    char operador; 
    int i; 

    for (i=0; i<15; i++;){
        printf("Digite o operador: \n");
        scanf("%c", &operador); 
        printf("Digite dois numeros: \n");
        scanf("%f%f", &num1, &num2); 
    

    switch (operador)
    {
    case'+': 
        resultado = num1 + num2;
        printf("Soma: %.1f", resultado); 
        break;
    case'-': 
        resultado = num1 - num2; 
        printf("Subtracao: %.1f", resultado);
        break; 
    case'*': 
        resultado = num1 * num2; 
        printf("Multiplicacao: %.1f", resultado);
        break;
    case'/': 
        resultado = num1 / num2; 
        printf("Divisao: %.1f", resultado);
        break;
    case'p': 
        resultado = pow(num1,num2); // potencia 
        printf("Potencia: %.1f", resultado);
        break;
    case'r':
        resultado = sqrt(num1); 
        printf("Raiz quadrada: %.1f", resultado);
        break; 
    default: printf("Operador invalido"); 
    }
    }



}