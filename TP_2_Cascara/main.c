#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <ctype.h>
#define CANT 3
#define VACIO 0
#define OCUPADO 1


int main()
{
    char seguir='s';
    int opcion, i, dniBuscar, poslibre;
    int hasta18=0, de19a35=0, mayorDe35=0, flag, mayor;
    EPersona inicio[CANT],auxlista;

    for(i = 0; i<CANT; i++)
    {
        inicio[i].estado=VACIO;
    }

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarDatos(inicio);
            break;
        case 2:
            borrar(inicio);
            break;
        case 3:
            listaNom(inicio);
            break;
        case 4:
            for(i=0;i<CANT;i++)
            {

            if(inicio[i].edad <= hasta18)
            {
                hasta18++;
            }
            else
            {
                if(inicio[i].edad>= mayorDe35)
                {
                    mayorDe35++;
                }
                else
                {
                    de19a35++;
                }
            }
            }
            for(i=mayor; i>0; i--)
            {
                if(i<10)
                {
                    printf("%02d|",i);
                }
                else
                    printf("%02d|",i);

                if(i<= hasta18)
                {
                    printf("*");
                }
                if(i<= de19a35)
                {
                    flag=1;
                    printf("\t*");
                }
                if(i<= mayorDe35)
                {
                    if(flag==0)
                        printf("\t\t*");
                    if(flag==1)
                        printf("\t*");

                }
            }

            printf("--+-----------------");
            printf("\n  |<18\t19-35\t>35");
            printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
