#include <stdio.h>
#include <stdlib.h>

int main(){
    float precio;
    int opcion, opcion1;
    do{

    
    printf("McDonalds\n");
    printf("1. McMenu\n");
    printf("2. Complementos\n");
    printf("3. Pagar y Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    //menu con 3 opciones
    switch (opcion)
    {
    case 1:
        printf("1. Normal(7.25€)\n");
        printf("2. Grande(7.85€)\n");
        printf("3. Atrás\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion1);
        switch (opcion1)
        {
        case 1:
            precio = precio + 7.25;
            break;
        case 2:
            precio = precio + 7.85;
            break;
        case 3:
            break;
        }
        break;
    case 2:
        printf("1. Patatas Fritas(2.55€)\n");
        printf("2. McNuggets(6.60€)\n");
        printf("3. Atrás\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion1);
        switch (opcion1)
        {
        case 1:
            precio = precio + 2.55;
            break;
        case 2:
            precio = precio + 6.60;
            break;
        case 3:
            break;
        }
        break;
    case 3:
        printf("Gracias por su compra\n");
        printf("Total: %.2f€\n", precio);
        break;
    }
    }while(opcion != 3);
    return 0;
}