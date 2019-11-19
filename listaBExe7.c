#include <stdlib.h>	
#include <stdio.h>
#include <string.h>	

int main(void)
{
	int a,b,r;
	printf("Digite o primeiro numero: \n");
	scanf("%d" , &a);
	printf("Digite o segundo numero: \n");
	scanf("%d" , &b);
	r=a-b;
	printf("A subtracao entre eles e: %d \n", r);
	
	system("pause");
	return 0;
	
}
