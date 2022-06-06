#include <stdio.h>
#include <string.h>

#define DIM 10

struct fecha {
    int dia;
    int mes;
    int anno;
};

struct serie {
    char titulo[50];
    int temporadas;
    int capitulos;
    struct fecha fechaEstreno;
};

typedef struct serie datosSerie;

void mostrarSeries(struct serie series[], int numSeries);
//struct serie almacenarSerie(void);
void almacenarSerie(struct serie series[], int *numSeries);
void mostrarSerie(struct serie series[], int numSeries, char titulo[]);
int calcularTotalCapitulos(struct serie series[], int numSeries);
int eliminarSerie(struct serie series[], int numSeries, int indice);
int contarSeriesVacias(struct serie series[], int numSeries);
int obtenerIndicePrimeraSerieVacia(struct serie series[], int numSeries);
int eliminarSeries(struct serie series[], int numSeries);

int main() {

    int i;
    struct serie series[DIM];
    struct serie s;
    char titulo[30];
    int numSeries, opcion, temporadas, totalCapitulos=0, indice;

    printf("¿De cuántas series quieres almacenar información? ");
    scanf("%d", &numSeries);

    //Pedir datos para cada serie del array
    for(i=0;i<numSeries;i++){
        printf("Introduce título de la serie %d: ",i+1);
        fpurge(stdin);
        scanf("%[^\n]", series[i].titulo);
        printf("Introduce temporadas de la serie %d: ", i+1);
        scanf("%d", &series[i].temporadas);
        printf("Introduce capítulos de la serie %d: ", i+1);
        scanf("%d", &series[i].capitulos);
        printf("Introduce día de estreno de la serie %d: ", i+1);
        scanf("%d", &series[i].fechaEstreno.dia);
        printf("Introduce mes de estreno de la serie %d: ", i+1);
        scanf("%d", &series[i].fechaEstreno.mes);
        printf("Introduce año de estreno de la serie %d: ", i+1);
        scanf("%d", &series[i].fechaEstreno.anno);
    }

    printf("\n");

    do {
        printf("\n\n MENÚ\n");
        printf("\n1 - Mostrar todas las series");
        printf("\n2 - Almacenar una serie más");
        printf("\n3 - Mostrar la información de una serie concreta");
        printf("\n4 - Cambiar número de capítulos de una serie");
        printf("\n5 - Calcular total de capítulos de todas las series");
        printf("\n6 - Buscar una serie por título y eliminarla del array");
	printf("\n7 - Eliminar todas las series vacías del array");
        printf("\n8 - SALIR");

        printf("\n\n Introduce una opción: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                mostrarSeries(series, numSeries);
                break;
            case 2:
                almacenarSerie(series, &numSeries);
                break;
            case 3:
                printf("\nIntroduce un título a buscar: ");
                fpurge(stdin);
                scanf("%[^\n]", titulo);
                mostrarSerie(series, numSeries, titulo);
                break;
            case 4:
                printf("\nIntroduce título de la serie a modificar: ");
                fpurge(stdin);
                scanf("%[^\n]", titulo);
                printf("\nIntroduce nuevo número de temporadas");
                scanf("%d", &temporadas);
                for(i=0;i<numSeries;i++){
                    if(strcmp(series[i].titulo, titulo)==0){
                        series[i].temporadas = temporadas;
                        break;
                    }
                }
                break;
            case 5:
                totalCapitulos = calcularTotalCapitulos(series, numSeries);
                printf("\nEl total de capítulos es %d", totalCapitulos);
                break;
            case 6:
                printf("\nIntroduce un título a buscar: ");
                fpurge(stdin);
                scanf("%[^\n]", titulo);
                //Bucle para encontrar el índice de la serie que buscamos
                for(i=0;i<numSeries;i++){
                    if(strcmp(series[i].titulo, titulo)==0){
                        indice = i;
                        break;
                    }
                }
                numSeries = eliminarSerie(series, numSeries, indice);
                break;
            case 7:
                numSeries = eliminarSeries(series,numSeries);
		break;
	    case 8:
                printf("\nSALIENDO...");
                break;
        }

    } while(opcion != 8);


    return 0;
}

void mostrarSeries(struct serie series[], int numSeries){
    int i;

    //Visualizar los datos para cada serie del array
    for(i=0;i<numSeries;i++){
        printf("\n\nEl título de la serie %d es %s", i+1, series[i].titulo);
        printf("\nLa serie %d tiene %d temporadas", i+1, series[i].temporadas);
        printf("\nLa serie %d tiene %d capítulos", i+1, series[i].capitulos);
        printf("\nLa serie %d se estrenó el día %d de %d de %d", i+1, series[i].fechaEstreno.dia, series[i].fechaEstreno.mes, series[i].fechaEstreno.anno);
    }
}

void almacenarSerie(struct serie series[], int *numSeries){
    struct serie s;

    if(*numSeries<DIM-1){
        printf("Introduce título de la serie: ");
        fpurge(stdin);
        scanf("%[^\n]", s.titulo);
        printf("Introduce temporadas de la serie: ");
        scanf("%d", &s.temporadas);
        printf("Introduce capítulos de la serie: ");
        scanf("%d", &s.capitulos);
        printf("Introduce día de estreno de la serie: ");
        scanf("%d", &s.fechaEstreno.dia);
        printf("Introduce mes de estreno de la serie: ");
        scanf("%d", &s.fechaEstreno.mes);
        printf("Introduce año de estreno de la serie: ");
        scanf("%d", &s.fechaEstreno.anno);

        series[*numSeries] = s;

        *numSeries+=1;
    } else {
        printf("No se pueden almacenar más series\n");
    }


}

void mostrarSerie(struct serie series[], int numSeries, char titulo[]){
    int i;

    //Visualizar los datos para una serie concreta del array
    for(i=0;i<numSeries;i++){
        if(strcmp(series[i].titulo, titulo)==0){
            printf("\n\nEl título de la serie %d es %s", i+1, series[i].titulo);
            printf("\nLa serie %d tiene %d temporada", i+1, series[i].temporadas);
            printf("\nLa serie %d tiene %d capítulos", i+1, series[i].capitulos);
            printf("\nLa serie %d se estrenó el día %d de %d de %d", i+1, series[i].fechaEstreno.dia, series[i].fechaEstreno.mes, series[i].fechaEstreno.anno);
        }
        break;
    }

}

int calcularTotalCapitulos(struct serie series[], int numSeries){
    int i, totalCapitulos;

    for(i=0;i<numSeries;i++){
        totalCapitulos += series[i].capitulos;
    }

    return totalCapitulos;
}

int eliminarSerie(struct serie series[], int numSeries, int indice){

    int j;

    for(j=indice;j<numSeries-1;j++){
        series[j] = series[j+1];
    }

    return numSeries-1;

}

int contarSeriesVacias(struct serie series[], int numSeries){
    int i;
    int contador = 0;

    for(i=0;i<numSeries;i++){
        if(series[i].temporadas==0){
            contador++;
        }
    }

    return contador;
}

int obtenerIndicePrimeraSerieVacia(struct serie series[], int numSeries){

    int i, indice = -1;

    for(i=0;i<numSeries;i++){
        if(series[i].temporadas==0){
            indice = i;
            break;
        }
    }

    return indice;
}

int eliminarSeries(struct serie series[], int numSeries){

    int i, indice, j;
/*
    //PRIMERA FORMA
    for(i=0;i<numSeries;i++){
        if(series[i].numTemporadas == 0){
            indice = i;

            for(j=indice;j<numSeries-1;j++){
                series[j] = series[j+1];
            }
            i--;
            numSeries--;
        }
    }
*/

    //SEGUNDA FORMA
    while(contarSeriesVacias(series, numSeries) > 0){
        indice = obtenerIndicePrimeraSerieVacia(series, numSeries);
        if(indice != -1) {
            eliminarSerie(series, numSeries, indice);
            numSeries--;
        } else {
            break;
        }
    }


    return numSeries;
}