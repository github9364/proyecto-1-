#include<stdio.h>

int main()
{
	int a,b;
	int sum,rest,mult,div;
	
	printf("ingrese el primer valor (entero): \n");
	scanf("%d",&a);
	
	printf("ingrese el segundo valor (entero): \n");
	scanf("%d",&b);
	
	sum= a+b;
	rest= a-b;
	mult= a*b;
	div= a/b;
	
	printf("el resultado de la suma es: %d \n",sum);
	printf("el resultado de la resta es: %d \n",rest);
	printf("el resultado de la multiplicacion es: %d \n",mult);
	printf("el resultado de la division es: %d \n",div);
	
	
	return 0;
}
