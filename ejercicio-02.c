#include <stdio.h>
//programa funcion principal
int main() {
    //ENTRADA DATOS
int quince = 15;
int siete = 7;
int veinte =20;
int cuatro = 4;
int seis = 6;
int tres = 3;
int diez = 10;
int dos = 2;
    //PROCESAMIENTO DATOS
int resultadoSumar= quince + siete; // almacencar el resultado en una nueva variable
int resultadoRestar= veinte - cuatro; // almacencar el resultado en una nueva variable
int resultadoMultiplicar= seis * tres; // almacencar el resultado en una nueva variable
int resultadoDividir= diez / dos; // almacencar el resultado en una nueva variable
int resultadoResto= diez % tres;


    //SALIDA DE DATOS
    printf("El resultado de sumar %d y %d es: %d\n", quince, siete, resultadoSumar);
    printf("El resultado de restar %d y %d es: %d\n", veinte, cuatro, resultadoRestar);
    printf("El resultado de multiplicar %d y %d es: %d\n", seis, tres, resultadoMultiplicar);
    printf("El resultado de dividir %d y %d es: %d\n", diez, dos, resultadoDividir);
    printf("El resultado de obtener el resto de dividir %d entre %d es: %d\n", diez, tres, resultadoResto);
    return 0;
}