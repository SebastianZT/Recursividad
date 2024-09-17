#include <stdio.h> 
//incremental
/*int factorial (int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int num=200;
    printf("El factorial de %d es: %d\n ", num, factorial(num));
    return 0;
}*/

//decremental 
/*int factorial (int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num = 5;
    printf("El factorial incremental de %d es: %d\n", num, factorial(num));
    return 0;
}*/

int factorial (int i, int resultado, int num){
    if(i>num){
        return resultado;
    }
    resultado *= i;

    factorial(i+1,resultado, num);
}
int main(){
    int num=5;
    printf("El factorial de %d es: %d\n ", num, factorial(1, 1 ,num));
    return 0;
}