#include <stdio.h>



int main (void)

{
	int X,Y,D1,D2;

	printf("Digite o primeiro número\n");
	scanf("%d",&X);
	printf("Digite o segundo número\n");
	scanf("%d",&Y);
		
	D1 = X - Y;
	scanf("%d",&D1);
	D2 = Y - X;
	scanf("%d",&D2);

	if (X > Y)
		
	printf("A diferença entre os dois números é=  "),scanf("%d\n",&D1);
	
	else

	printf("A diferença entre os dois número é= "),scanf("%d\n",&D2);
	

	return 0;

}
