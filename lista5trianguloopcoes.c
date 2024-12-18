#include <stdio.h>

/*Um triângulo pode ser classificado de acordo com as medidas de seus lados:
- Um triângulo equilátero possui todos os lados de mesma medida.
- Um triângulo isósceles possui dois lados de mesma medida.
- Um triângulo escaleno possui as medidas dos três lados diferentes.

Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3) 
e classificá-lo em equilátero, isósceles ou escaleno.*/

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
