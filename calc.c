#include <stdio.h>

void menu();
int suma(int,int, resultado);
int resta(int,int);
int multi(int, int);
int div(int, int);

int main() {
menu();
return 0;
}

void menu() {
    printf("menu");
}

int suma(int a, int b, resultado) {
    printf("Introduce el primer numero: \n");
    scanf("%d", &a);
    printf("Introduce el segundo numero: \n");
    scanf("%d", &b);
    resultado = a + b;
    printf("El resultado es %d\n", resultado);
    return 1;
}

int resta(int a, int b) {
    return 1;
}

int multi(int a, int b) {
    return 1;
}

int div(int a, int b) {
    return 1;
}
