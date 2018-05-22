/*A un trabajador le pagan según horas trabajadas y la tarifa está a un valor por hora. Si la cantidad de horas trabajadas es mayor a 40 horas, la tarifa por hora se incrementa en un 50% para las horas extras.
Calcular el salario del trabajador dadas las horas trabajadas y la tarifa.*/

#include<stdio.h>

	float salario(float horastrabajadas,float tarifa){
		float a[5];

		if(horastrabajadas>40){
			a[0]=tarifa*1.5;
			a[1]=horastrabajadas-40;
			a[2]=a[1]*a[0];
			a[3]=40*tarifa;
			a[4]=a[2]*a[3];
			return a[4]; 
		}
		else{

			a[0]=horastrabajadas*tarifa;
			return a[0];
		}
}

	int main(){

		float horastrabajadas,tarifa;
		printf("\n Ingrese las horas trabajadas: \n\n");
		scanf("%f",&horastrabajadas);
		printf("\n Ingrese la tarifa por hora de trabajo: \n\n€");
		scanf("%f",&tarifa);
		printf("\n Su salario es: €%.2f\n\n",salario(horastrabajadas,tarifa));
		return 0;
	}
	
/*Fin del proyecto
errores=()*/