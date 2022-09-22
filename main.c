#include <stdio.h>
#include "helper.h"
#define end_of_vector 100

int main() {

    int longitud;
    int vector[] = {3, 2, 5, 1, 4,9,6,2,8,77,54,62,27,85,49, 10, 7,34,32,52,end_of_vector};

    longitud=longVector(vector);
    printf("vector sin ordenar\n");
    imprimirVector(vector);
    ordenar(vector, longitud);
    printf("Parcialmente ordenado\n");
    imprimirVector(vector);

    printf("procedo a imprimir el vector ordenado:por pasos\n");

    copio(vector, longitud);


printf("imprimo el vector ordenado\n");
    imprimirVector(vector);

    return 0;

}