#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    srand(time(NULL));
    int numero = rand() % 100;
    int numero_usuario;
    while (numero_usuario != numero){
        if (numero_usuario > numero){
            printf("El numero es mas pequeño\n");
        }
        else{
            printf("El numero es mas grande\n");
        }
         printf("Introduce un numero entre 0 y 100: ");
        scanf("%d", &numero_usuario);
    
    while(numero_usuario < 0 || numero_usuario > 100){
        printf("Introduce un numero entre 0 y 100: ");
        scanf("%d", &numero_usuario);
    }
    };
    printf("Has acertado el numero");
    return 0;
    

}