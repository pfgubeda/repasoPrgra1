#include <stdio.h>
#include <stdlib.h>

float calcular(float num1, float num2, char operacion);
int calcularDigitos(int numC);
int validarCuatroDigitos(int numC);
int main(){
    float n1, n2;
    int opcion;
    int numC;
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
    printf("5.Calcular digitos\n");
    printf("6.Validar 4 dígitos\n");
    printf("7. Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
    case 1:
        calcular(n1, n2, 's');
        break;
    case 2:
        calcular(n1, n2, 'r');
        break;
    case 3:
        calcular(n1, n2, 'm');
        break;
    case 4:
        calcular(n1, n2, 'd');
        break;
    case 5:
        printf("Introduce un numero: ");
        scanf("%d", &numC);
        calcularDigitos(numC);
        break;
    case 6:
        printf("Introduce un numero: ");
        scanf("%d", &numC);
        int a = validarCuatroDigitos(numC);
        if (a==1) {
            printf("El numero es valido\n");
            return 0;
        
        }else{
            printf("El número no es válido\n");
            break;
        }
        
    }
    }while (opcion !=7);
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
    }else if (operacion == 'd'){
        float division;
        division = num1 / num2;
        printf("La division es: %.2f\n", division);
    } 
    return 1; 
}

int calcularDigitos(int numC){
    int contador = 0;
    while(numC > 0){
        numC = numC / 10;
        contador++;
    }
    printf("El numero tiene %d digitos\n", contador);
    return contador;
}

int validarCuatroDigitos(int numC){
    int contador = 0;
    while(numC > 0){
        numC = numC / 10;
        contador++;
    }
    if(contador == 4){
        return 1;
    }else{
        return 0;
    }
}