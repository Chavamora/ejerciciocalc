#include <stdio.h>

void menu();
int suma(int,int);
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

int suma(int a, int b) {
    int resultado
    resultado = a + b;
    printf("El resultado es %d\n", resultado);
    return resultado;
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
