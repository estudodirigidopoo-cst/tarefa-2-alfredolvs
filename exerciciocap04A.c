#include <stdio.h>

int main (void)

{
	int A,B,C,X;

	printf("entre com o valor de A\n");
	scanf("%d",&A);
	printf("entre com o valor de B\n");
	scanf("%d",&B);
	printf("entre com o valor de C\n");
	scanf("%d",&C);

	
	if (A > C)

	{
		X = B;
		B = A;
		A = X;
	}
	
	if (B > C)
	{
		X = C;
		C = B;
		B = X;
	}
	
	if (A > B)
	{
		X = B;
		B = A;
		A = X;

	}

		printf("\nos valores ordenados são: %d %d %d\n", A, B, C);
		
	return 0;

}
