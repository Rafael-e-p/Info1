#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float BMI;
    
    printf("ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    printf("ingrese su altura en metros: ");
    scanf("%f", &altura);

    BMI = peso / (altura*altura);
    
    printf("Su BMI es: %.2f\n", BMI);
    printf("Tabla de referencia de BMI:\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad\n");     
   
  return 0;
}
