// 61 brasilia
// 62 goias
// 11 sao paulo 
// 31 minas gerais
// 71 salvador
// 21 rio de janeiro
// 81 recife
#include <stdio.h>
int main (){
    int ddd;

    printf("Digite o DDD:");
    scanf("%d", &ddd);
    

    switch(ddd){
        case 61: printf("brasilia"); break;
        case 62: printf("goias");break;
        case 11: printf("sao paulo");break;
        case 31: printf("minas gerais"); break;
        case 71: printf("salvador");break;
        case 21: printf("rio de janeiro");break;
        case 81: printf("recife");break;
        default: printf("codigo invalido");
    }

}