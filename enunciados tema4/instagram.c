#include <stdio.h>

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct publicacion{
    int comentarios;
    int likes;
    struct fecha fecha;
};

struct cuenta{
    char id_usuario[20];
    int num_seguidores;
    int num_seguidos;
    int num_publicaciones;
    int num_medio_publicaciones_mes;
    struct publicacion p_publicacion, u_publicacion;
};
int main(){
    printf("*********************************************");
    printf("\n");
    printf("*            PRACTICA INSTAGRAM             *");
    printf("\n");
    printf("*********************************************");
    printf("\n");
    struct cuenta c;
    printf("Introduce el id del usuario: ");
    scanf("%s", c.id_usuario);
    printf("Introduce el numero de seguidores: ");
    scanf("%d", &c.num_seguidores);
    printf("Introduce el numero de seguidos: ");
    scanf("%d", &c.num_seguidos);
    printf("Introduce el numero de publicaciones: ");
    scanf("%d", &c.num_publicaciones);
    printf("Introduce el numero de medio publicaciones por mes: ");
    scanf("%d", &c.num_medio_publicaciones_mes);
    printf("Introduce el numero de comentarios en el ultimo post: ");
    scanf("%d", &c.u_publicacion.comentarios);
    printf("Introduce el numero de likes en el ultimo post: ");
    scanf("%d", &c.u_publicacion.likes);
    printf("Introduce el dia de la ultima publicacion: ");
    scanf("%d", &c.u_publicacion.fecha.dia);
    printf("Introduce el mes de la ultima publicacion: ");
    scanf("%d", &c.u_publicacion.fecha.mes);
    printf("Introduce el año de la ultima publicacion: ");
    scanf("%d", &c.u_publicacion.fecha.anio);
    printf("Introduce el numero de comentarios en el primer post: ");
    scanf("%d", &c.p_publicacion.comentarios);
    printf("Introduce el numero de likes en el primer post: ");
    scanf("%d", &c.p_publicacion.likes);
    printf("Introduce el dia de la primera publicacion: ");
    scanf("%d", &c.p_publicacion.fecha.dia);
    printf("Introduce el mes de la primera publicacion: ");
    scanf("%d", &c.p_publicacion.fecha.mes);
    printf("Introduce el año de la primera publicacion: ");
    scanf("%d", &c.p_publicacion.fecha.anio);
    printf("\n");
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\n");
    printf("*********************************************");
    printf("\n");
    printf("*            Datos del Usuario       %s  *", c.id_usuario);
    printf("\n");
    printf("*********************************************");
    printf("\n");
    printf("Seguidores : %d", c.num_seguidores);
    printf("\n");
    printf("Seguidos : %d", c.num_seguidos);
    printf("\n");
    printf("Publicaciones : %d", c.num_publicaciones);
    printf("\n");
    printf("\n");
    printf("Última publicación, %d/%d/%d", c.u_publicacion.fecha.dia, c.u_publicacion.fecha.mes, c.u_publicacion.fecha.anio);
    printf("\n");
    printf("        Comentarios : %d", c.u_publicacion.comentarios);
    printf("\n");
    printf("        Likes : %d", c.u_publicacion.likes);
    printf("\n");
    printf("\n");
    printf("Primera publicación, %d/%d/%d", c.p_publicacion.fecha.dia, c.p_publicacion.fecha.mes, c.p_publicacion.fecha.anio);
    printf("\n");
    printf("        Comentarios : %d", c.p_publicacion.comentarios);
    printf("\n");
    printf("        Likes : %d", c.p_publicacion.likes);
    printf("\n");
    printf("\n");
    printf("El usuario %s tiene una media de %d publicaciones al mes", c.id_usuario, c.num_medio_publicaciones_mes);
}