#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (int argc, char**argv)

{
	float A,B,C,X1,X2,DELTA;

	printf("entre com o valor de A\n");
	scanf("%f",&A);
	printf("entre com o valor de B\n");
	scanf("%f",&B);
	printf("entre com o valor de C\n");
	scanf("%f",&C);

	DELTA = B*B - 4*A*C;
	X1 = (-B + sqrt(DELTA)) / (2*A);
	X2 = (-B - sqrt(DELTA)) / (2*A);


	if (DELTA < 0)

	{
	printf("a equação não possui raizes reais");
	} else
	{
	printf("o valor de X1 é:  %.2fn", X1);
	printf("o valor de X2 é:  %.2fn", X2);
	}
	
	
	return 0;

}
