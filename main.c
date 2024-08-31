#include <stdio.h>

void main(void) {
    int opcion;

    printf("Elige una opción (1 o 2): ");
    scanf("%d", &opcion);

    if(opcion == 1) {
        printf("Hola, FPUNA uwu! :)\n");
    } else if(opcion == 2) {
        printf("Mickaela la Vice y mizzuna !\n"); // No se si escribi bien tu nombre
    } else {
        printf("Opción Incorrecta\n");
    }

    return;
}