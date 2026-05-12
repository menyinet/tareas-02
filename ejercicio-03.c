#include <stdio.h> // incluir la libreria standard de entrada y salida input output
int main(){
//ENTRADA DE DATOS
int a = 5;
int b= 10;
//PROCESAMIENTO
// bool boleanos verdad o falso las compraciones me devuelven 
int resultado = a > b; //operador de comparacion mayor que, devuelve 1 si es verdadero y devuelve 0 si es falso
int resultado2 = a < b; //operador de comparacion menor que, devuelve 1 si es verdadero y devuelve 0 si es falso
int resultado3 = a == b; //operador de comparacion igual que, devuelve 1 si es verdadero y devuelve 0 si es falso
int resultado4 = a != b; //operador de comparacion diferente que, devuelve 1 si es verdadero y devuelve 0 si es falso
//SALIDA DE DATOS
printf("El numero %d es mayor que %d: %d\n", a, b, resultado);
printf("El numero %d es menor que %d: %d\n", a, b, resultado2);
printf("El numero %d es igual que %d: %d\n", a, b, resultado3);
printf("El numero %d es diferente que %d: %d\n", a, b, resultado4);
return 0;
}