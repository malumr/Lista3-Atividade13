#include <stdio.h>
float calcularMedia(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3.0;
}
int main() {
	int num1, num2, num3;
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	printf("Digite o terceiro número: ");
	scanf("%d", &num3);
	float media = calcularMedia(num1, num2, num3);
	printf("A média é: %.2f\n", media);
	return 0;
}
