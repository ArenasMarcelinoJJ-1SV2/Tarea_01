#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

//Raices de Ecuacion de segundo grado
	
	float a, b, c, x1, x2;
	
	printf("Intruce el valor de 'a': ");
	scanf("%f", &a);
	
	printf("Introduce el valor de 'b': ");
	scanf("%f", &b);
	
	printf("Introduce el valor de 'c': ");
	scanf("%f", &c);
	
	x1=((-b)+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=((-b)-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	if((pow(b,2)-4*a*c)<0){
		printf("ERROR\n");
		printf("Discriminante Negativo");
	}
	
	else{
		printf("Las raices de la ecuacion son: \n");
		printf("X1= %f\n",x1);
		printf("X2= %f", x2);
	}
	
	getch();
	return 0;
}
