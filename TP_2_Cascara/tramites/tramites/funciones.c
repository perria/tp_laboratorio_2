#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define CANT 3

int cargarDatoU(cargarTramite inicio[])
{
    int i, contU=0;
for(i=0;i<CANT;i++)
{

 contU++;
 printf("Ingrese dni\n");
 fflush(stdin);
 scanf("%d",&inicio[i].dni);


}

}


int cargarDatoR(cargarTramite inicio[])
{
    int i, contR=0;
for(i=0;i<CANT;i++)
{

contR++;
 printf("Ingrese dni\n");
 fflush(stdin);
 scanf("%d",&inicio[i].dni);
}

}
