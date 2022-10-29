#include <stdio.h>
#include <stdlib.h>

int * calcular(int a, int b)
{
    static int valores[3];

    valores[0]=a+b;
    valores[1]=a*b;
    valores[2]=a-b;

    return valores;
    
}

int main ()
{
    int num_1, num_2; 
    int *valor;
    int result_1, result_2, result_3;
    
    printf("DIGITE O PRIMEIRO NUMERO:");
    scanf("%d", &num_1);
    printf("DIGITE O SEGUNDO NUMERO:");
    scanf("%d", &num_2);

    valor=calcular(num_1, num_2);

    result_1=valor[0];
    result_2=valor[1];
    result_3=valor[2];

    printf("\n%d\n%d\n%d", result_1, result_2, result_3);

    return(0);
}