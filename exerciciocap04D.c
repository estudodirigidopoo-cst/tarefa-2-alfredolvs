#include <stdio.h>



int main (void)

{
	float N1,N2,N3,N4,MD1,EX,MD2;

	printf("entre com N1\n");
	scanf("%f",&N1);
	printf("entre com N2\n");
	scanf("%f",&N2);
	printf("entre com N3\n");
	scanf("%f",&N3);
	printf("entre com N4\n");
	scanf("%f",&N4);

	MD1 = (N1+N2+N3+N4)/4;
	
	
	if (MD1 >=7)

	
	printf("O aluno foi aprovado! Média =   ");
	scanf("%f\n", &MD1);

	else

	printf("Informe o valor da nota de EXAME =   "); 
	scanf("%f\n", &EX);
	MD2 = (MD1+EX)/2;
	if (MD2 >=7)
		printf("Aluno foi aprovado após o exame");

	else
		printf("O aluno foi reprovado após o exame");

	printf("A média final foi de : % f", MD2);

	
		
	
	return 0;

}
