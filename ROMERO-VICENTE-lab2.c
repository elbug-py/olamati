#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMANO 1000

int main(int argc, char **argv){
    FILE * archivo;
    FILE * archivo_out;

    archivo = fopen("codigo.txt", "r"); archivo_out =   fopen("salida.txt", "w");

    while (!feof(archivo))
    {   
        char linea1[TAMANO], linea2[TAMANO], linea3[TAMANO], linea4[TAMANO]; 
        fscanf(archivo,"%s%s%s%s",linea1, linea2, linea3, linea4);
        if(feof(archivo)) break;
        fprintf(archivo_out,"%c%c%c%c" ,atoi(linea1), atoi(linea2), atoi(linea3), atoi(linea4));
         
    }

    fclose(archivo); // always close your files after using them!!
    fclose(archivo_out); // always close your files after using them!!

    return 0;
}