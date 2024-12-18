#include <stdio.h>

/*Um tri�ngulo pode ser classificado de acordo com as medidas de seus lados:
- Um tri�ngulo equil�tero possui todos os lados de mesma medida.
- Um tri�ngulo is�sceles possui dois lados de mesma medida.
- Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes.

Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1, lado2 e lado3) 
e classific�-lo em equil�tero, is�sceles ou escaleno.*/

int main()
{
	int lado1, lado2, lado3;
	
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%i", &lado1);
	
	printf("Digite o segundo lado do triangulo: ");
	scanf("%i", &lado2);
	
	printf("Digite o terceiro lado do triangulo: ");
	scanf("%i", &lado3);
	
	if(lado1 == lado2 && lado2 == lado3)
	{
		printf("\nTriangulo equilatero");
	}
	else if(lado1 == lado2 && lado2 != lado3 || lado3 == lado2 && lado2 != lado1)
	{
		printf("\nTriangulo isosceles");
	}
	else
	{
		printf("\nTriangulo escaleno");
	}
	
	return 0;
}
