#include <stdio.h>

float division(float a, float b){

    if(b == 0){

        printf("No se puede dividir para cero");
        return 0;

    }

    return a / b;

}