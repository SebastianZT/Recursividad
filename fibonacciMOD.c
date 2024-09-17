#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        printf("Fibonacci(0) = 0\n");
        return 0;
    }
    if (n == 1) {
        printf("Fibonacci(1) = 1\n");
        return 1;
    }

    int a = fibonacci(n - 1);
    int b = fibonacci(n - 2);
    int suma = a + b;
    
    printf("Fibonacci(%d) = Fibonacci(%d) + Fibonacci(%d) => %d + %d = %d\n", n, n-1, n-2, a, b, suma);
    
    return suma;
}

int main() {
    int num = 10;
    printf("La serie Fibonacci en la posicion %d es: %d\n", num, fibonacci(num));
    return 0;
}
