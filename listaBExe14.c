#include <stdlib.h>	
#include <stdio.h>
#include <math.h>

int main(void)

{
	float val,des,v_des, v_pro;
	printf("Digite o valor do produto R$: \n");
	scanf("%f" , &val);
	printf("Digite o percentual de desconto: %\n");
	scanf("%f" , &des);
	v_des=(val*des)/100;
	printf("O valor do desconto e: %f \n", v_des);
	v_pro=(val-v_des);
	printf("O valor do produto com desconto e: %f \n", v_pro);
	
	system("pause");
	return 0;	
}
