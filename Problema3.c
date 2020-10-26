#include <stdio.h>
#include <conio.h>

int main(){
	
	printf("SUMA DE VALORES\n");
	
	float a=456.98, b=231.4;
	float suma_ent= a+b;
	
	printf("El primer valor de la suma es: %.2f\n", a);
	printf("El segundo valor de la suma es: %.1f\n", b);
	
	printf("La suma de los valores anteriores es: %.2f", suma_ent);
	
	getch();
	return 0;

}
