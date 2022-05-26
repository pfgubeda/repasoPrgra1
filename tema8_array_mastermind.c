#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int nAleatorios[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        nAleatorios[i] = rand() % 6;
    }
    int solucion[5];
    int acertado = 0;
    do
    {

        for (i = 0; i < 5; i++)
        {
            printf("Introduce la solución para la posicion %d: ", i + 1);
            scanf("%d", &solucion[i]);
        };
        int solucionado = 0;
        printf("\n------------------------------------------\n");
        for (i = 0; i < 5; i++)
        {
            if (solucion[i] == nAleatorios[i])
            {
                printf("    %d    ", solucion[i]);
                solucionado++;
            }
            else
            {
                printf("    X    ");
            }
        }
        printf("\n-------------------------------------------\n");

        if (solucionado == 5)
        {
            printf("Has acertado todo\n");
            printf("Saliendo...");
            return 0;
        }
        else
        {
            printf("\n");
            printf("Otro intento\n");
        }

    } while (acertado == 0);
}
