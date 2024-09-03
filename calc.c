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

float modulo(int a, int b) {
    if(b==0){
        printf("la division no es valida");
        return 0;
    }
    return a % b;
}
