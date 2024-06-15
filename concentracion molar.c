#include<stdio.h>
int main()
{
    float soluto, volumen, solucion;
    printf("Ingresa los moles de soluto: ");
    scanf("%f", &soluto);
    
    printf("Ingresa el volumen de la solucion: ");
    scanf("%f", &volumen);
    
    solucion = soluto/volumen;
    
    printf("la concentracion molar de una solucion es de: %.2f moles",solucion);
    
    return 0;
}
