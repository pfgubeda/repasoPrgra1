#include <stdio.h>
#include <stdlib.h>

float calcular(float num1, float num2, char operacion);
int calcularDigitos(int numC);
int validarCuatroDigitos(int numC);
void calcularDiferencia();
void calcularDiferenciaTiempo();
void mostrarDiferencia(int segundosDiferencia);
void cuentaAtras();
void cuentaAlante();
int numeroPerfecto(int numero);
int main()
{
    float n1, n2;
    int opcion;
    int numC;
    int numeroP;
    printf("Introduce un numero:");
    scanf("%f", &n1);
    printf("Introduce otro numero:");
    scanf("%f", &n2);

    printf("Calculator Pafego\n");
    do
    {
        printf("****************************************\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5.Calcular digitos\n");
        printf("6.Validar 4 dígitos\n");
        printf("7.Diferencia entre dos fechas\n");
        printf("8.Diferencia entre dos tiempos\n");
        printf("9.Cuenta atrás\n");
        printf("10.Cuenta alante\n");
        printf("11.Numero perfecto\n");
        printf("12.Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
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
            if (a == 1)
            {
                printf("El numero es valido\n");
                return 0;
            }
            else
            {
                printf("El número no es válido\n");
                break;
            }
        case 7:
            calcularDiferencia();
            break;
        case 8:
            calcularDiferenciaTiempo();
            break;
        case 9:
            cuentaAtras();
            break;
        case 10:
            cuentaAlante();
            break;
        case 11:
            printf("Introduce un numero: ");
            scanf("%d", &numeroP);
            int b = numeroPerfecto(numeroP);
            if (b == 1)
            {
                printf("El numero es perfecto\n");
                break;
            }
            else
            {
                printf("El numero no es perfecto\n");
                break;
            }
        }
    } while (opcion != 12);
    printf("Saliendo...\n");
    return 0;
}

float calcular(float num1, float num2, char operacion)
{
    if (operacion == 's')
    {
        float suma;
        suma = num1 + num2;
        printf("La suma es: %.2f\n", suma);
    }
    else if (operacion == 'r')
    {
        float resta;
        resta = num1 - num2;
        printf("La resta es: %.2f\n", resta);
    }
    else if (operacion == 'm')
    {
        float multiplicacion;
        multiplicacion = num1 * num2;
        printf("La multiplicacion es: %.2f\n", multiplicacion);
    }
    else if (operacion == 'd')
    {
        float division;
        division = num1 / num2;
        printf("La division es: %.2f\n", division);
    }
    return 1;
}

int calcularDigitos(int numC)
{
    int contador = 0;
    while (numC > 0)
    {
        numC = numC / 10;
        contador++;
    }
    printf("El numero tiene %d digitos\n", contador);
    return contador;
}

int validarCuatroDigitos(int numC)
{
    int contador = 0;
    while (numC > 0)
    {
        numC = numC / 10;
        contador++;
    }
    if (contador == 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void calcularDiferencia()
{
    int dia1, mes1, anio1, dia2, mes2, anio2;
    int valor1, valor2;
    int resultado;
    printf("Introduce el día de la primera fecha: ");
    scanf("%d", &dia1);
    printf("Introduce el mes de la primera fecha: ");
    scanf("%d", &mes1);
    printf("Introduce el año de la primera fecha: ");
    scanf("%d", &anio1);
    valor1 = anio1 * 365 + mes1 * 30 + dia1;
    printf("Introduce el día de la segunda fecha: ");
    scanf("%d", &dia2);
    printf("Introduce el mes de la segunda fecha: ");
    scanf("%d", &mes2);
    printf("Introduce el año de la segunda fecha: ");
    scanf("%d", &anio2);
    valor2 = anio2 * 365 + mes2 * 30 + dia2;
    resultado = valor2 - valor1;
    printf("La diferencia es de %d días\n", resultado);
}

void calcularDiferenciaTiempo()
{
    int hora1, minuto1, segundo1, hora2, minuto2, segundo2;
    int valor1, valor2;
    int resultado;
    printf("Introduce la primera hora: ");
    scanf("%d", &hora1);
    printf("Introduce los minutos de la primera hora: ");
    scanf("%d", &minuto1);
    printf("Introduce los segundos de la primera hora: ");
    scanf("%d", &segundo1);
    valor1 = hora1 * 3600 + minuto1 * 60 + segundo1;
    printf("Introduce la segunda hora: ");
    scanf("%d", &hora2);
    printf("Introduce los minutos de la segunda hora: ");
    scanf("%d", &minuto2);
    printf("Introduce los segundos de la segunda hora: ");
    scanf("%d", &segundo2);
    valor2 = hora2 * 3600 + minuto2 * 60 + segundo2;
    resultado = valor2 - valor1;
    mostrarDiferencia(resultado);
}
void mostrarDiferencia(int resultado)
{
    int horas = resultado / 3600;
    int minutos = (resultado % 3600) / 60;
    int segundos = (resultado % 3600) % 60;
    printf("La diferencia es de %d horas, %d minutos y %d segundos\n", horas, minutos, segundos);
}

void cuentaAtras()
{
    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    while (numero >= 0)
    {
        printf("%d\n", numero);
        numero--;
    }
}
void cuentaAlante()
{
    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    int i = 0;
    while (i <= numero)
    {
        printf("%d\n", i);
        i++;
    }
}
int numeroPerfecto(int numero)
{
    int suma = 0;
    int i = 1;
    while (i < numero)
    {
        if (numero % i == 0)
        {
            suma = suma + i;
        }
        i++;
    }
    if (suma == numero)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}