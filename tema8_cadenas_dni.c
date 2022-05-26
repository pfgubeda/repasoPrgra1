#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char dni[10];

    char letra;
    printf("Introduce el DNI sin letra: ");
    scanf("%s", dni);
    int numero = atoi(dni);
    numero = numero % 23;
    if(numero == 0){
        letra = 'T';
    }else if(numero == 1){
        letra = 'R';
    }else if(numero == 2){
        letra = 'W';
    }else if(numero == 3){
        letra = 'A';
    }else if(numero == 4){
        letra = 'G';
    }else if(numero == 5){
        letra = 'M';
    }else if(numero == 6){
        letra = 'Y';
    }else if(numero == 7){
        letra = 'F';
    }else if(numero == 8){
        letra = 'P';
    }else if(numero == 9){
        letra = 'D';
    }else if(numero == 10){
        letra = 'X';
    }else if(numero == 11){
        letra = 'B';
    }else if(numero == 12){
        letra = 'N';
    }else if(numero == 13){
        letra = 'J';
    }else if(numero == 14){
        letra = 'Z';
    }else if(numero == 15){
        letra = 'S';
    }else if(numero == 16){
        letra = 'Q';
    }else if(numero == 17){
        letra = 'V';
    }else if(numero == 18){
        letra = 'H';
    }else if(numero == 19){
        letra = 'L';
    }else if(numero == 20){
        letra = 'C';
    }else if(numero == 21){
        letra = 'K';
    }else if(numero == 22){
        letra = 'E';
    }
    printf("El DNI es: %s%c", dni, letra);
    return 0;
}