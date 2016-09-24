#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define CANT 3
#define VACIO 0
#define OCUPADO 1

/** \brief libera la posicion
 *
 * \param posicion
 * \param estructura
 * \return la posicion
 *
 */

int posicionLib(EPersona inicio[])
{
    int i, posicion=-1;
    for(i=0; i<CANT; i++)
    {
        if(inicio[i].estado==VACIO)
        {
            posicion=i;
            break;
        }
    }
    return posicion;
}
/** \brief carga los datos
 *
 * \param i
 * \param estructura
 *
 */

void cargarDatos(EPersona inicio[])
{

    int i;
    int hasta18=0, de19a35=0, mayorDe35=0;

    for(i=0; i<CANT; i++)
    {
        if(inicio[i].estado==VACIO)
        {
            EPersona datos;
            printf("Ingrese nombre\n");
            fflush(stdin);
            gets(inicio[i].nombre);

            printf("Ingrese edad\n");
            fflush(stdin);
            scanf("%d",&inicio[i].edad);

            printf("Ingrese dni\n");
            fflush(stdin);
            scanf("%d",&inicio[i].dni);

            inicio[i].estado=OCUPADO;

            for(i=0; i<CANT; i++)
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

                break;
            }
        }
        for(i=0; i<CANT; i++)
        {
            if(inicio[i].estado==OCUPADO)
            {
                printf("\nNombre:\n%s\nEdad:\n%d\nDni:\n%d\n",inicio[i].nombre,inicio[i].edad,inicio[i].dni);
            }

        }
        return inicio;

    }

    /** \brief borra el dato que usuario quiere, buscandolo con el dni
     *
     * \param dniB, i
     * \param estructura
     *
     */

    void borrar(EPersona inicio[])
    {

        int dniB;
        int i;
        int hasta18=0, de19a35=0, mayorDe35=0;

        printf("Ingrese el dni del contacto a borrar:\n");
        fflush(stdin);
        scanf("%d",&dniB);

        for(i=0; i<20; i++)
        {
            if(dniB==inicio[i].dni)
            {
                inicio[i].estado=VACIO;
                break;
            }

            for(i=0; i<CANT; i++)
            {

                if(inicio[i].edad <= hasta18)
                {
                    hasta18--;
                }
                else
                {
                    if(inicio[i].edad>= mayorDe35)
                    {
                        mayorDe35--;
                    }
                    else
                    {
                        de19a35--;
                    }
                }
            }
        }
        /** \brief ordena los nombres
         *
         * \param i,j
         * \param estructura
         *
         */


        void listaNom(EPersona inicio[])
        {
            EPersona auxlista;
            int i,j;
            for(i=0; i<CANT-1; i++)
            {
                for(j=i+1; j<CANT; j++)
                {
                    if((stricmp(inicio[i].nombre,inicio[j].nombre))>0)
                    {
                        auxlista=inicio[i];
                        inicio[i]=inicio[j];
                        inicio[j]=auxlista;
                    }
                }
            }

            for(i=0; i<CANT; i++)
            {
                if(inicio[i].estado==OCUPADO)
                {
                    printf("\nNombre:\n%s\nEdad:\n%d\nDni:\n%d\n",inicio[i].nombre,inicio[i].edad,inicio[i].dni);
                }
            }
        }


