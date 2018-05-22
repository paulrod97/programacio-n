#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int peso;
	int opcion;

	printf("introduzca peso en kilogramos");
	scanf("%d",&peso);

	printf("Seleccione opción:\n");
	printf("1 - Hectogramos\n");
	printf("2 - Decagramos\n");
	printf("3 - Gramos\n");
	printf("4 - Decigramos\n");
	printf("5 - Centigramos\n");
	printf("6 - Milgramos\n");

	scanf("%d",&opcion);

	switch(opcion)
	{
		case 1:
			printf("El peso es:%d\n",peso/10);
			break;
		case 2:
			printf("El peso es:%d\n",peso/100);
			break;
		case 3:
			printf("El peso es:%d\n",peso/1000);
			break;
		case 4:
			printf("El peso es:%d\n",peso/10000);
			break;
		case 5:
			printf("El peso es:%d\n",peso/100000);		
			break;
		case 6:
			printf("El peso es:%d\n",peso/1000000);
			break;
		default:
		printf("Opción no valida.");
		break;
	}
system("PAUSE");
return 0;
}
