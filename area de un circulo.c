#include <stdio.h>
#include <math.h>

int main(){
	float radio, area, longitud;
	
	printf ("Introduce el radio del circulo: ");
	scanf("%f", &radio);
	
	area = M_PI * pow (radio,2);
	
	printf("El area de un circulo es: %f",area);
	
}
