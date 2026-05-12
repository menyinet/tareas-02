//importamos un elemento de libreria a traves de include
#include <stdio.h>
//funcion principal del programa
int main() {
    //aqui dentro de las llaves va el codigo que se ejecutara al correr el programa
    //ENTRADA DE DATOS
    //DECLARACION DE VARIABLES
    int edad = 50; //tipo de dato intenger que es un numero entero
    float precio = 19.99; //tipo de dato float que es un numero con decimales
    char letra = 'm'; //tipo de dato char que es un caracter
    //TRATAMIETNO DE DATOS
    //SALIDA DE DATOS.
    printf("La edad es %d\n",edad); 
    printf("El precio es %f\n",precio);
    printf("La letra es %c\n",letra);
    return 0; //devuelve un valor de 0 para indicar que el programa se ejecutó correctamente
}