#include<stdio.h>

/*7) Realizar un programa que escriba el porcentaje descontado en una compra, introduciendo la cantidad comprada, el precio (valor) de la compra y el precio (valor) pagado.*/

double iva(float cant,float subtotal,float total,float x,float y){
	
	x=(total/subtotal)*100;
	y=100-x;
	return y;
}

int main(){
	
	float cant, subtotal, total,x,y;
	printf("\n Ingrese la cantidad comprada: \n\n");
	scanf("%f",&cant);
	printf("\n Ingrese el precio (valor) de la compra: \n\n");
	scanf("%f",&subtotal);
	printf("\n Ingrese el precio (valor) pagado: \n\n");
	scanf("%f",&total);
	printf("\n El porcentaje descontado en la compra es del %3f porciento \n\n",iva(cant,subtotal,total,x,y));

return 0;
}