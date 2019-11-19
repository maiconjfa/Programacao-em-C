#include <stdlib.h>	
#include <stdio.h>
#include <math.h>

int main(void)

{
	float a,b,c;
	printf("Digite os valores da base do triangulo: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a<b+c && b<a+c && c<a+b){	
	printf("E um triangulo \n");
}
    if(a==b && b==c && a==c){		
	printf("E um triangulo equilatero \n");
}
	if (a==b && b==c && a!=c || a==b && b!=c && a==c || a!=b && b==c && a==c){	
	printf ("E um triangulo isosceles \n");
}
 	if (a!=b && b!=c && a!=c){
	printf("E um triangulo escaleno \n");
}   
    else{
	printf("Nao e um triangulo \n");
}
	system("pause");
	return 0;	
  }


