#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSu IMC es: %.2f\n", imc);

    printf("\nTabla de referencia del IMC:\n");
    printf("Menor a 18.5     -> Bajo peso\n");
    printf("Entre 18.5 y 24.9 -> Peso normal\n");
    printf("Entre 25 y 29.9   -> Sobrepeso\n");
    printf("30 o más          -> Obesidad\n");

    printf("\nCondición según su IMC: ");
    
    if (imc < 18.5)
    printf("Bajo peso\n");
        else if (imc < 25)
        printf("Peso normal\n");
            else if (imc < 30)
            printf("Sobrepeso\n");
        else
        printf("Obesidad\n");

    return 0;
}
