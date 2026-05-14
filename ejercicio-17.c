//averigiar un numero es cero, psoitivo o negativo
//realizar una accion
#include <stdio.h>
int main(){
    //ENTRADA DATOS
    int numero_introducido;
    printf("Introducir un numero \n");
    //alamceno el numero introducido en la variable
    scanf("%d", &numero_introducido);
    //PROCESAMIENTO DATOS
    if(numero_introducido>0){
        //el numero es positivo y mostrar la tabla de multiplicar con un bucle
        printf("El numero es positivo");
    } else if(numero_introducido<0) {
        //el numero es negativo y lo convierto a su valor absoluto  su valor en positivo
        printf("El numero es negativo");

    } else{
        printf("El numero es cero");// no hacemos nada solo indicarlo
    }
    return 0;
}