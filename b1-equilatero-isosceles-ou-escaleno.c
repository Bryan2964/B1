#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triângulo Equilátero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Triângulo Isósceles\n");
    } else {
        printf("Triângulo Escaleno\n");
    }

    return 0;
}

