/*Se desea realizar un programa que permita calcular la media del número de hijos que tienen las familias de una comunidad de vecinos. 
Para ello el programa permitirá al usuario introducir el número de hijos que tiene cada familia, se introducirán datos hasta que introduzca un número negativo.
El programa debe sacar como resultado la media del número de hijos por familia en la comunidad y el número de familias numerosas que hay (familias con más de 2 hijos).*/

#include <stdio.h>
int main(){
    int n, i, cont=0, cont2=0;
    float media;
    printf("Introduce el numero de hijos de cada familia: ");
    scanf("%d", &n);
    while(n>=0){
        cont++;

        i=i+n;
        if(n>2){
            cont2++;
        }
        printf("Introduce el numero de hijos de cada familia: ");
        scanf("%d", &n);
    }
    media=i/cont;
    printf("La media de hijos por familia es: %f\n", media);
    printf("El numero de familias numerosas es: %d\n", cont2);
    return 0;
}

