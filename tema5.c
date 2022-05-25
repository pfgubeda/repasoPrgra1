
#include <stdio.h>

struct hermano
{
    int edad;
    float peso;
};

int main()
{
    printf("\n");
    printf("*********************************************");
    printf("\n");
    printf("*            PRACTICA EDADES             *");
    printf("\n");
    printf("*********************************************");
    printf("\n");
    struct hermano h1, h2, h3;
    printf("Introduce la edad del hermano 1: ");
    scanf("%d", &h1.edad);
    printf("Introduce el peso del hermano 1: ");
    scanf("%f", &h1.peso);
    printf("Introduce la edad del hermano 2: ");
    scanf("%d", &h2.edad);
    printf("Introduce el peso del hermano 2: ");
    scanf("%f", &h2.peso);
    printf("Introduce la edad del hermano 3: ");
    scanf("%d", &h3.edad);
    printf("Introduce el peso del hermano 3: ");
    scanf("%f", &h3.peso);
    printf("\n");

    // año de nacimiento de cada hermano
    int ano1 = 2022 - h1.edad;
    printf("El hermano 1 nacio en el año %d\n", ano1);
    int ano2 = 2022 - h2.edad;
    printf("El hermano 2 nacio en el año %d\n", ano2);
    int ano3 = 2022 - h3.edad;
    printf("El hermano 3 nacio en el año %d\n", ano3);

    int edad_media = (h1.edad + h2.edad + h3.edad) / 3;
    printf("Edad media de los 3 hermanos: %d", edad_media);
    printf("\n");

    float peso_media = (h1.peso + h2.peso + h3.peso) / 3;
    printf("Peso media de los 3 hermanos: %f", peso_media);

    printf("\n");

    int num;
    printf("Introduce un numero");
    scanf("%d", &num);
    int resto = num % 10; 
    printf("El resto de dividir %d entre 10 es %d\n", num, resto);
}