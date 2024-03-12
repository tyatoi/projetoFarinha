#include <stdio.h>
#define XICGRAMAS 120
#pragma warning(disable:4996)

int main() {
	float g = 0.0, x = 0.0;
	printf("Digite quantidades de xicaras q voce gostaria de tranformar: \n");
	scanf("%f", &x);
	g = x * XICGRAMAS;
	printf("O valor em gramas e: %.2f\n", g);
	return 0;
}