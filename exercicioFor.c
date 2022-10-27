#include <stdio.h>
int main(){
    int numero, i;
    scanf("%d", &numero);
    for (i=1;i<=10;i++){
        printf("%d X %d = %d\n", numero, i, numero*i); 
    }
} 