#include <stdio.h>

typedef enum { // defino posibles estados de la maquina
    INICIO,
    MEDIR_PH,
    CLASIFICAR,
    FINALIZAR
} Estado;

int main() {
    Estado estado = INICIO; // estado inicial
    float pH;               // variable para almacenar el pH

    while (estado != FINALIZAR) { //mientras el estado sea distinto a finalizar..
        switch (estado) {
            case INICIO:
                printf("Bienvenido al programa de clasificación de sustancias segun su pH\n"); //n hace salto de linea
                estado = MEDIR_PH; // cambiar al siguiente estado
                break;

            case MEDIR_PH:
                printf("Ingrese el valor del pH (0-14): ");
                scanf("%f", &pH);

                // verificar el rango del pH, que sea mayor a 0 y menor a 14
                if (pH < 0 || pH > 14) {
                    printf("El pH debe estar entre 0 y 14. Inténtelo de nuevo.\n");
                } else {
                    estado = CLASIFICAR; // Cambiar al siguiente 
                }
                break;

            case CLASIFICAR:
                if (pH < 7) {
                    printf("La sustancia es ÁCIDA.\n");
                } else if (pH == 7) {
                    printf("La sustancia es NEUTRA.\n");
                } else {
                    printf("La sustancia es BÁSICA.\n");
                }
                estado = FINALIZAR; // Cambia a estado final
                break;

            case FINALIZAR:
                printf("Proceso terminado. ¡Gracias por usar el programa!\n");
                break;
        }
    }

    return 0;
}

//explicacion: Cada estado se define como un caso (case) dentro de un gran switch(van cambiando) 
//organiza el flujo de ejecución de la mef hace que solo se ejecuten las acciones específicas para el estado actual
//asegura que el programa avance de forma ordenada por cada paso
