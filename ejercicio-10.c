//solicitar 2 numeros y realizar una operacion
#include <stdio.h>
int main () {
    //ENTRADA DATOS
    int numero1;
    int numero2;
    int operacion;
    float resultado;
    //PROCESAMIENTO DATOS
    printf("Introduce el primer numero\n");
    scanf("%d",&numero1);
    printf("Introduce el segundo numero\n");
    scanf("%d",&numero2);
    printf("Introduce un numero del 1 al 4 para la operacion suma, resta, multiplicacion o division\n");
    scanf("%d",&operacion);
    //SALIDA DATOS
    switch(operacion){
        case 1: resultado = numero1+numero2;
        printf("el resultado de la suma es %f \n", resultado);
        break;
        case 2: resultado = numero1-numero2;
        printf("el resultado de la resta es %f \n", resultado);
        break;
        case 3: resultado = numero1*numero2;
        printf("el resultado de la multiplicacion es %f \n", resultado);
        break;
    case 4: resultado = numero1/numero2;
        printf("el resultado de la division  es %f \n", resultado);
        break;
        default : printf("opcion no valida\n");
        break;
    }
}