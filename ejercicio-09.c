//primer ejercicio de bucles comenzamos por el bucle switch
//que sirve para evaluar una variable y ejecutar un bloque de codigo dependiendo del valor de esa variable
#include <stdio.h>
int main(){
    //aqui el codigo correspondiente
    //ENTRADA DE DATOS
    int opcion; //variable para almacenar la opcion del usuario
    //PROCESAMIENTO DE DATOS
    printf("Escribe un numero del 1 al 5 para saber que dia de la semana es \n");
    scanf("%d",&opcion); //leer y guardar el valor introducido por el usuario en la variable opcion
    //SALIDA DE DATOS
    //comenzamos con el switch
    switch(opcion){
        //caso opcion es 1 , muestra el texto lunes
        case 1: printf("Lunes \n"); //muestra lunes en la terminal
        break; //finaliza el bloque de codigo y sale del switch
        case 2: printf("Martes \n");
        break;
        case 3: printf("Miercoles \n");
        break;
        case 4: printf("Jueves \n");
        break;
        case 5: printf("Viernes \n");
        break;
        //por si acaso no coincide el numero con los casos
        //vamos a establcer una opcion por defecto
        default: printf("Opcion no valida \n");
    }
    return 0;
}