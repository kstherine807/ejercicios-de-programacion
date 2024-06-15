#include<stdio.h>
int main()
{
    float corriente, voltaje, resistencia;
    printf("Ingresa el voltaje: ");
    scanf("%f", &voltaje);
    
    printf("Ingresa la resistencia: ");
    scanf("%f", &resistencia);
    
    corriente = voltaje/resistencia;
   
    printf("la corriente en el circuito es: %.2f I",corriente);
    
    return 0;
}
