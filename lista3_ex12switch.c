#include <stdio.h>
int main(){
    int mes;
    printf("Digite o mes: \n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:  printf("janeiro");break;
    case 2:  printf("fevereiro");break;
    case 3:  printf("marco");break;
    case 4:  printf("abril");break;
    case 5:  printf("maio");break;
    case 6:  printf("junho");break;
    case 7:  printf("julho");break;
    case 8:  printf("agosto");break;
    case 9:  printf("setembro");break;
    case 10:  printf("outubro");break;
    case 11:  printf("novembro");break;
    case 12:  printf("dezembro");break;
    default: printf("invalido!");

    }
1 - 3: verao 
4 - 6: inverno 
7 - 9: primavera
10 - 12: outono 

switch (mes)
    {
    case 1 ... 3 :  printf("verao");break;
    case 4 ... 6 :  printf("inverno");break;
    case 7 ... 9 :  printf("primavera");break;
    case 10 ... 12 :  printf("outono");break;
    default: printf("invalido!");
    }
switch (mes)
    {
    case 'V' :  printf("verao");break;
    case 'I' :  printf("inverno");break;
    case 'P' :  printf("primavera");break;
    case 'O' :  printf("outono");break;
    default: printf("invalido!");
    case 'v' :  printf("verao");break;
    case 'i' :  printf("inverno");break;
    case 'p' :  printf("primavera");break;
    case 'o' :  printf("outono");break;
    default: printf("invalido!");
    
    }



}