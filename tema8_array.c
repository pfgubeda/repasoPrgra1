#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand (time(NULL));
    int nAleatorios[30];
    int nPares[30];
    int i;
    int j = 0;
    int aleatorio;
    for(i = 0; i < 30; i++){
        aleatorio = rand() % 100;
        nAleatorios[i] = aleatorio;
        if(aleatorio % 2 == 0){
            nPares[j] = aleatorio;
            j++;
        }
    }
    int totalPares = j;
    printf("Números Aleatorios\n");
    for(i=0; i<30; i++){
        printf("%d\n", nAleatorios[i]);
    }
    printf("Números Pares\n");
    for(j=0; j<totalPares; j++){
        printf("%d\n", nPares[j]);
    }

}