#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            float importe, aumento;
            int antiguedad;
           
            importe=1000;
           
            printf("Introduzca la antigüedad del trabajador: ");
    scanf("%d",&antiguedad);
           
            if (antiguedad>=10)
            {
       aumento=importe*0.1;
    }
    else if (antiguedad<10 && antiguedad>=5)
            {
       aumento=importe*0.07;
    }
    else if (antiguedad<5 && antiguedad>=3)
            {
       aumento=importe*0.05;
    }
    else
    {
        aumento=importe*0.03;
    }
    
    printf("\nEl sueldo que le corresponde al trabajador es de %f euros\n",importe+aumento);
    
    return 0;
}