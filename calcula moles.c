#include<stdio.h>
int main()
{
    float moles, masa, masaml;
    printf("Ingresa la masa: ");
    scanf("%f", &masa);
    
    printf("Ingresa la masa molar : ");
    scanf("%f", &masaml);
    
    moles = masa / masaml;
    
    printf("la cantidad de moles en la sustancia es de: %.2f moles",moles);
    
    return 0;
}
