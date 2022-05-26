#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct medicos
{
    int pacientes;
};

struct centro
{
    int num_medicos;
    struct medicos medico[500];
};

int main()
{
    struct centro c[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\n\n********** CENTRO %d **********\n\n", i + 1);
        printf("Introduce el numero de medicos del centro %d: ", i + 1);
        scanf("%d", &c[i].num_medicos);
        int total;
        for (total = 0; total < c[i].num_medicos; total++)
        {
            printf("Introduce el numero de pacientes del medico %d: ", total + 1);
            scanf("%d", &c[i].medico[total].pacientes);
            printf("\n");
        }
    }
    printf("\n");
    // mostrar el medico con mas pacientes
    int medico_mas_pacientes = 0;
    int medico_mas_pacientes_centro = 0;
    int medico_mas_pacientes_pacientes = 0;
    printf("********** REGISTRO DE MÉDICOS **********\n\n");
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < c[i].num_medicos; j++)
        {
            printf("Centro %d - Medico %d - Pacientes %d\n", i + 1, j + 1, c[i].medico[j].pacientes);
            if (c[i].medico[j].pacientes > medico_mas_pacientes_pacientes)
            {
                medico_mas_pacientes = j;
                medico_mas_pacientes_centro = i;
                medico_mas_pacientes_pacientes = c[i].medico[j].pacientes;
            }
        }
    }
    printf("\n");
    printf("El medico con mas pacientes es el medico %d del centro %d con %d pacientes\n", medico_mas_pacientes + 1, medico_mas_pacientes_centro + 1, medico_mas_pacientes_pacientes);
    printf("\n");

    return 0;
}