#include <stdio.h> 
int main(){
    float n1 , n2 , media ; 

    printf("Digite as notas 1 e 2: \n");
    scanf("%f%f", &n1, &n2); // scanf múltiplo 

    media = (n1 + n2)/2; 

    printf("media: %.1f\n", media); // .1f quantas casas apos a virgula

    if (media >= 7)
        printf("APROVADO! \n"); 
        else printf("REPROVADO!"); 


}