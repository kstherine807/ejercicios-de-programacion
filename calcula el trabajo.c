#include<stdio.h>
int main()
{
    float trabajo, fuerza, distancia;
    printf("Ingresa la fuerza constante: ");
    scanf("%f", &fuerza);
    
    printf("Ingresa la distancia recorrida: ");
    scanf("%f", &distancia);
    
    trabajo = fuerza * distancia;
    
    printf("El trabajo realizado fue de: %.2f W",trabajo);
    
    return 0;
}
