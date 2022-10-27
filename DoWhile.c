#include <stdio.h>
int main(){
    int idade; // idades validas 1 a 110

    do{
        printf("Digite a idade: \n");
        scanf("%d", &idade); 
    } while (idade<1 || idade>110);


}  