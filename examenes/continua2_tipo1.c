#include <stdio.h>
#include <string.h>

struct info{
    char nombre[50];
    char apellidos[50];
    int expediente;
};
struct puesto{
    int ocupado;
    struct info infoPersonal;
    int contador;
};

void inicializar(struct puesto puestos[], int numPuestos);
void  llenarClase(struct puesto puestos[], int numPuestos);
int comprobarOcupacion(int p, struct puesto puestos[]);
void limpiarAula(struct puesto puestos[], int numPuestos);
void mostrarDespedida(void);
int comprobarAsistencia(struct puesto puestos[], int exp);

int main(){
    int numPuestos = 51;
    int expediente;
    struct puesto puestos[numPuestos];
    inicializar(puestos, numPuestos);
    char opcion[1];
    printf("AULA BARROCA \n\n");
    do{
        printf("a. Entrar a clase \n");
        printf("b. Limpiar aula tras una clase \n");
        printf("c. Comrpobar asistencia \n");
        printf("d. Salir \n");
        printf("Introduce una opción: ");
        fpurge(stdin);
        scanf("%s", opcion);
        switch(opcion[0]){
            case 'a':
                llenarClase(puestos, numPuestos);
                break;
            case 'b':
                limpiarAula(puestos, numPuestos);
                break;
            case 'c':
                printf("Introduce el número de expediente: ");
                scanf("%d", &expediente);
                int asistencia = comprobarAsistencia(puestos, expediente);
                if(asistencia == 1){
                    int a;
                    for(a=0;a<numPuestos;a++){
                        if(puestos[a].infoPersonal.expediente == expediente){
                            printf("%s %s ha asistido a clase. \n", puestos[a].infoPersonal.nombre, puestos[a].infoPersonal.apellidos);
                        }
                    }
                }else{
                    printf("El alumno no está presente \n");
                }
                break;
        }
    }while(opcion[0]!='d');
    mostrarDespedida();
}

void inicializar(struct puesto puestos[], int numPuestos){
    int i;
    for(i=0;i<numPuestos;i++){
        puestos[i].ocupado = 0; //libre
        puestos[i].contador = 0;
        puestos[i].infoPersonal.expediente = -1;
        strcpy(puestos[i].infoPersonal.nombre,"");
        strcpy(puestos[i].infoPersonal.apellidos,"");
    }
}
void llenarClase(struct puesto puestos[], int numPuestos){
    int numAlumnos , i;
    printf("¿Cuántos alumnos van a entrar en clase?");
    scanf("%d", &numAlumnos);
    for(i=0; i<numAlumnos; i++){
        struct puesto p;
        int numPuesto;
        printf("Introduce el puesto a ocupar por el alumno %d: ", i+1);
        int r = 1;
        do{
            scanf("%d", &numPuesto);
            r = comprobarOcupacion(numPuesto, puestos);
        }while(r!=0);
        puestos[numPuesto-1].ocupado = 1;
        printf("Introduce el nombre del alumno %d: ", i+1);
        fpurge(stdin);
        scanf("%s", puestos[numPuesto-1].infoPersonal.nombre);
        printf("Introduce los apellidos del alumno %d: ", i+1);
        fpurge(stdin);
        scanf("%s", puestos[numPuesto-1].infoPersonal.apellidos);
        printf("Introduce el expediente del alumno %d: ", i+1);
        fpurge(stdin);
        scanf("%d", &puestos[numPuesto-1].infoPersonal.expediente);
        puestos[numPuesto-1].contador++;
        printf("\n");
        printf("Puesto ocupado con éxito\n");
    }
}
int comprobarOcupacion(int p, struct puesto puestos[]){
    if(p>50 || p<1){
        printf("Puesto no válido. Introduce un puesto entre 1 y 50: ");
        return 1;
    }
    if(puestos[p-1].ocupado == 1){
        printf("Puesto ocupado. Introduce otro puesto: ");
        return 1;
    }
    return 0;
}
void limpiarAula(struct puesto puestos[], int numPuestos){
    int i;
    for(i=0; i<numPuestos; i++){
        if(puestos[i].ocupado == 1){
            puestos[i].ocupado = 0;
            puestos[i].infoPersonal.expediente = -1;
            strcpy(puestos[i].infoPersonal.nombre,"");
            strcpy(puestos[i].infoPersonal.apellidos,"");
        }
    }
}
void mostrarDespedida(void){
    printf("Saliendo...");
}
int comprobarAsistencia(struct puesto puestos[], int exp){
    int i;
    for(i=0; i<51; i++){
        if(puestos[i].infoPersonal.expediente == exp){
            return 1;
        }
    }
    return 0;
}