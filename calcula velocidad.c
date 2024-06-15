#include<stdio.h>
int main()
{
    float distancia, tiempo, velocidad;
    printf("Ingresa la distancia recorrida en kilometros: ");
    scanf("%f", &distancia);
    
    printf("Ingresa el tiempo empleado en horas: ");
    scanf("%f", &tiempo);
    
   velocidad = distancia/tiempo;
    
    printf("la velocidad es: %.2f km/h",velocidad);
    
    return 0;
}
