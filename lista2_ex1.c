// faça um programa que leia dois números e mostre qual deles é o maior 

#include <stdio.h>
int main(){

    int n1 , n2 ; 

    printf("Digite o numero 1: \n");
    scanf("%d", &n1); 
    printf("Digite o numero 2: \n"); 
    scanf("%d", &n2);

    if (n1 > n2)
    printf("numero 1 e maior \n");
    else printf("numero 2 e maior "); 

    
}

//if (n1 > n2)
//    printf("O numero 1 (%d) eh maior que o numero 2 (%d)\n", n1 , n2);
//    else printf ("O numero 2  (%d) eh maior que o numero 1 (%d)\n", n2 , n1);