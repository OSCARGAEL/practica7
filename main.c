#include <stdio.h>
#include "leerPalabras"
#include "desplegueahorcado"
#define MAX_PALABRAS 100
#define MAX_LONG_PALABRA 50

int main ()
{
  
char palabras[MAX_PALABRAS][MAX_LONG_PALABRA];
char nombreArchivoFigura[] = "ahorcado6.txt";
int i;

leerPalabrasDeArchivo ("palabras.txt", palabras);
 
for (i = 0; i < MAX_PALABRAS && palabras[i][0] != '\0'; i++)
    {
      
printf ("%s\n", palabras[i]);
    
}
 
despliegaAhorcado (nombreArchivoFigura);
 
return 0;
}
