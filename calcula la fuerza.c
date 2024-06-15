#include<stdio.h>
int main()
{
    float fuerza, masa, aceleracion;
    printf("Ingresa la masa: ");
    scanf("%f", &masa);
    
    printf("Ingresa la aceleracion: ");
    scanf("%f", &aceleracion);
    
    fuerza = masa * aceleracion;
   
    printf("la fuerza ejercida sobre el objeto es de: %.2fw",fuerza);
    
    return 0;
}
