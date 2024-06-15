#include<stdio.h>
#include<stdbool.h>

int main(){

    int i, num, n, selec;
    float result;
    
	printf("Cuantos numeros vas a agregar?: ");
	scanf("%i", &n);
	
	for (i=0;i<n;i++){
		
	printf("Que numero deseas agregar?: ");
	scanf("%i", &num);
	
	result+=num;
	
	system ("cls");
		}
    result=result/n;
    printf("El promedio es: %.1f", result);
    
	return 0;
	
}
	
