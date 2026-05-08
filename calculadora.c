#include<stdio.h>
#include"division.h"
#include"suma.h"
#include"resta.h"
#include"multiplicacion.h"

int main(){

     float n1, n2;
    int opcion;

    printf("CALCULADORA\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");

    printf("Elija una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el primer numero: ");
    scanf("%f", &n1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &n2);

}
