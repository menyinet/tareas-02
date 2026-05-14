//bucle while para contar hacia atras desde un numero solicitado por la terminal
#include <stdio.h>
int main(){
    //ENTRADA DATOS
    int numero;
    //PROCESAMIENTO DATOS
    printf("Introduce un numero \n");
    scanf("%d",&numero);
    //SALIDA DATOS
    while(numero >=10){
        printf("El numero %d \n",numero);
        numero--;
    }
return 0;
}