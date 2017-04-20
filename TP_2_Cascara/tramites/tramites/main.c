#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
     char seguir='s';
    int opcion, i;
//    cargarTramite inicio[CANT],auxlista;

    /*for(i = 0; i<CANT; i++)
    {
        inicio[i].estado=VACIO;
    }*/

    while(seguir=='s')
    {
        printf("\n1- Tramite urgente\n");
        printf("2- Tramite regular\n");
        printf("3- Proximo cliente\n");
        printf("4- Listar\n");
        printf("5- Informar\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarDatoU(inicio);
            break;
        case 2:
            cargarDatoR(inicio);
            break;
        case 3:
            proximoTurno(inicio);
            break;
        case 4:
            listarPendientes(inicio);
            break;
        case 5:
            informarAtendidos(inicio);
        }
    }
    return 0;
}
