#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define titulo "-------------------------------- Sistema de Troco em Moedas --------------------------------"

int resto (int troco_cent, int valor_moeda);

int main()
{
	float trocoreal;
	int trococent, moeda1real, moeda50, moeda25, moeda10, moeda5, moeda1;
	
	printf ("%s\n\n", titulo);
	
	do
	{
		printf("Qual valor do troco? Em reais - (0.0): ");
		scanf("%f", &trocoreal);
	}
	while(trocoreal < 0.0);
	printf("\n");
	
	trococent = round(trocoreal * 100);
	
	moeda1real = trococent/100;
	trococent = resto(trococent, 100);
	
	moeda50 = trococent/50;
	trococent = resto (trococent, 50);
	
	moeda25 = trococent/25;
	trococent = resto(trococent, 25);
	
	moeda10 = trococent/10;
	trococent = resto(trococent, 10);
	
	moeda5 = trococent/5;
	trococent = resto(trococent, 5);
	
	moeda1 = trococent/1;
	trococent = resto(trococent, 1);
	
	if (moeda1real > 1)
	{
		printf("%d moedas de 1 real.\n\n", moeda1real);
	}
	else if (moeda1real == 1){
		printf("%d moeda de 1 real.\n\n", moeda1real);
	}
	
	
	if (moeda50 > 1)
	{
		printf("%d moedas de 50.\n\n", moeda50);
	}
	else if (moeda50 == 1){
		printf("%d moeda de 50.\n\n", moeda50);
	}
	
	
	if (moeda25 > 1)
	{
		printf("%d moedas de 25.\n\n", moeda25);
	}
	else if (moeda25 == 1){
		printf("%d moeda de 25.\n\n", moeda25);
	}
	
	
	if (moeda10 > 1)
	{
		printf("%d moedas de 10.\n\n", moeda10);
	}
	else if (moeda10 == 1){
		printf("%d moeda de 10.\n\n", moeda10);
	}
	
	
	if (moeda5 > 1)
	{
		printf("%d moedas de 5.\n\n", moeda5);
	}
	else if (moeda5 == 1){
		printf("%d moeda de 5.\n\n", moeda5);
	}
	
	
	if (moeda1 > 1)
	{
		printf("%d moedas de 1.\n\n", moeda1);
	}
	else if (moeda1 == 1){
		printf("%d moeda de 1.\n\n", moeda1);
	}
	
	
	system ("pause");
	return 0;

}

int resto (int troco_cent, int valor_moeda)
{
	return troco_cent % valor_moeda;
}
