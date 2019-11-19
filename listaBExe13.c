#include <stdlib.h>	
#include <stdio.h>
#include <math.h>

int main(void)

{
	float a,b,c;
	printf("Digite o valor da base do triangulo: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a==b && b==c && c==a){
	
	printf("E um triangulo equilatero");
	
	if (a==b && b==c && c!=a || a==b && b!=c && a==c || a!=b && b==c && c==a){
	}
	printf ("E um triangulo isosceles");
	
	system("pause");
	return 0;	
  }
}

