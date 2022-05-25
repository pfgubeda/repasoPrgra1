#include <stdio.h>
#include <stdlib.h>

float calcular(float num1, float num2, char operacion);

int main(){
    float n1, n2;
    int opcion;
    printf("Introduce un numero:");
    scanf("%f", &n1);
    printf("Introduce otro numero:");
    scanf("%f", &n2);

    printf("Calculator Pafego\n");
    do{
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Salir\n");
    
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    switch (opcion) {
    case 1:
        calcular(n1, n2, "s");
        break;
    case 2:
        calcular(n1, n2, "r");
        break;
    case 3:
        calcular(n1, n2, "m");
        break;
    case 4:
        calcular(n1, n2, "d");
        break;
    }}while (opcion !=5);
    printf("saliendo");
    return 0;
    
}


float calcular(float num1, float num2, char operacion){
    if(operacion == 's'){
        float suma;
        suma = num1 + num2;
        printf("La suma es: %.2f\n", suma);
    }else if (operacion == 'r'){
        float resta;
        resta = num1 - num2;
        printf("La resta es: %.2f\n", resta);
    }else if (operacion == 'm'){
        float multiplicacion;
        multiplicacion = num1 * num2;
        printf("La multiplicacion es: %.2f\n", multiplicacion);
    }else if (operacion == "d"){
        float division;
        division = num1 / num2;
        printf("La division es: %.2f\n", division);
    }    
}