#include<stdio.h>
int main()
{
    int c, f;
    printf("Ingresa los grados celsius: ");
    scanf("%i", &c);
    
    f=c*9/5+32;
    
    printf("%i Celsius equivalen a %i Fahrenheit",c,f);
    
    return 0;
}
