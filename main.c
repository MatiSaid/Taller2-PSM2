#include <stdio.h>

int main(void) {
    int opcion;

    printf("Elige una opción (1, 2, 3 o 4): ");
    scanf("%d", &opcion);

    if(opcion == 1) {
        printf("Hola, FPUNA! :)\n");
    } else if(opcion == 2) {
        printf("Mica la Vice y miss UNA!\n");
    } else if(opcion == 3) {
        printf("Mati el mejor\n");
    } else if(opcion == 4) {
        printf("Tenemos hambre :c\n");
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
