#include <stdio.h>
#include "helper.h"


void downheap(int i,int longitud, int * vector) {

    if(HI(i)<longitud){
        if(vector[i]>vector[HI(i)]){
            if(HD(i)<longitud && vector[HI(i)]>vector[HD(i)]){
                int pivote=vector[HD(i)];
                vector[HD(i)]=vector[i];
                vector[i]=pivote;
                downheap(HD(i), longitud, vector);
            }else{
                int pivote=vector[HI(i)];
                vector[HI(i)]=vector[i];
                vector[i]=pivote;
                downheap(HI(i), longitud, vector);
            }

        }else if(HD(i)<longitud && vector[i]>vector[HD(i)]){
            int pivote=vector[HD(i)];
            vector[HD(i)]=vector[i];
            vector[i]=pivote;
            downheap(HD(i), longitud, vector);

        }
    }

}

int longVector(int * vector){
        int cont=0;
        //busco la longitud del vector y lo dejo cargada en la variable i
        for (int i = 0; vector[i]!=100; ++i) {
           cont++;
        }
    printf("se contabilizo %d elementos\n", cont);
        return cont;
}

void imprimirVector(int *vector) {

    for (int i = 0; vector[i] !=100 ; ++i) {

        printf("%d :", vector[i]);

    }
printf("\n");
}

int HD(int numero) {

    return numero*2+2;
}

int HI(int numero) {

    return numero*2+1;
}


void ordenar(int * vector, int longitud) {

    for (int i = (longitud/2)-1; i>=0 ; --i) {

        downheap(i,longitud, vector);

    }
}

void copio(int *vector, int longitud) {

    while(longitud>0) {
        int pivote = vector[0];
        vector[0] = vector[longitud - 1];
        vector[longitud - 1] = pivote;
        longitud--;
        downheap(0, longitud, vector);
    }
}


