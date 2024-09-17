#include <stdio.h>

void decimalABinario(int n){
    if (n==0){
        return;

    }
    decimalABinario(n/2);
    printf("%d", n % 2);
}

int main(){
    int num= -15;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    if (num<0){
        printf("No se pueden poner numeros negativos");
    }
    if(num>0){
        printf("La representacion binaria de %d es: ", num);
        decimalABinario(num);
        printf("\n");

        return 0;
    }
}