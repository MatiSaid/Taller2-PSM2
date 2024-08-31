#include <stdio.h>

void main(void) {
    int opcion;

    printf("Elige una opción (1 o 2): ");
    scanf("%d", &opcion);

    if(opcion == 1) {
        printf("Hola, FPUNA! :)\n");
    } else if(opcion == 2) {
        printf("Micaelha la mejor Vice y Miss UNA !\n"); // No se si escribi bien tu nombre
    } else {
        printf("Opción Incorrecta\n");
    }

    return 0;
}
