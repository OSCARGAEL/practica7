#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PALABRAS 100
#define MAX_LONG_PALABRA 50
#define MAX_LONG_FILA 100
  
void leerPalabrasDeArchivo (char *nombreArchivo,char (*arreglo)[MAX_LONG_PALABRA]) 
{
  
FILE * archivo;
char fila[MAX_LONG_FILA];
int i = 0;
 
archivo = fopen (nombreArchivo, "r");
  
 
if (archivo == NULL)
    
{
      
printf ("Error al abrir el archivo %s\n", nombreArchivo);
      
exit (1);
    
 
}
  
while (fgets (fila, MAX_LONG_FILA, archivo) != NULL && i < MAX_PALABRAS)
    
{
 
fila[strcspn (fila, "\n")] = '\0';
      
strcpy (arreglo[i], fila);
      
i++;
    
}
  
fclose (archivo);

}
