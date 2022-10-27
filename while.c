#include <stdio.h>
int main(){
    int iniciar;

    printf("Deseja iniciar o algoritmo? \n");
    printf("Digite 1 para sim e 2 para nao \n");
    scanf("%d", &iniciar);

    while(iniciar ==1){

        printf("rodando while!");
        printf("Usuario deseja continuar? 1 - continuar \n");
        scanf("%d", &iniciar); 

    }
}