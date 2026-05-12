#include <stdio.h>
// operador logicos 
int main() {
    //estructura de nuestros programas
    //ENTRADA DATOS
    int x = 8;
    int y = 3;
    int resultado1 = (x>5) && (y<5);// primero se evalua la condicion del primer parentesis 
    //luego del segundo
    //Y si ambas son verdadedeas devuelve como valor de resultado1 verdadero (1)
    //PROCESAMIENTO DATOS
    int resultado2 = (x < 5) || (y < 5);
    int resultado3 =!(x > y);
    
    //SALIDA DATOS
    printf("El valor de resultado1 es: %d \n",resultado1);
    printf("El valor de resultado2 es: %d \n",resultado2);
    printf("El valor de resultado3 es: %d \n",resultado3);
    return 0;
}