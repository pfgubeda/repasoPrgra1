#include <stdio.h>


struct dueno{
    char inicialN[1];
    char incialA[2];
    char telefono[9];
};
struct coche{
    char marca[1];
    int km;
    int peso;
    struct dueno duenio;
};

int main(){
    struct coche c;
    printf("Introduce la marca del coche: ");
    scanf("%s", c.marca);
    printf("Introduce los kilómetros del coche: ");
    scanf("%d", &c.km);
    printf("Introduce el peso del coche: ");
    scanf("%d", &c.peso);
    printf("Introduce la inicial del dueño: ");
    scanf("%s", c.duenio.inicialN);
    fflush(stdin);
    printf("Introduce la inicial del apellido del dueño: ");
    scanf("%s", c.duenio.incialA);
    fflush(stdin);
    printf("Introduce el telefono del dueño: ");
    scanf("%s", c.duenio.telefono);
    fflush(stdin);

    printf("La marca del coche es: %s\n", c.marca);
    printf("Los kilómetros del coche son: %d\n", c.km);
    printf("El peso del coche es: %d\n", c.peso);
    fflush(stdin);
    printf("La inicial del dueño es: %s\n", c.duenio.inicialN);
    fflush(stdin);
    printf("La inicial del apellido del dueño es: %s\n", c.duenio.incialA);
    fflush(stdin);
    printf("El telefono del dueño es: %s\n", c.duenio.telefono);
    fflush(stdin);
    return 0;
}