#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float BMI;

    do{
    printf("ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    printf("ingrese su altura en metros: ");
    scanf("%f", &altura);
        if(peso < 0 || altura < 0){
        printf("Error, los valores no pueden ser negativos\n");}
    }while(peso > 0 || altura > 0);

    BMI = peso / (altura*altura);
    
    printf("Su BMI es: %.2f\n", BMI);
    printf("Tabla de referencia de BMI:\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad\n");     

    if(BMI < 18.5){
        printf("Su peso es bajo.");}
        else if(BMI >= 18.5 && BMI < 25){
            printf("Su peso es normal.");}
            else if(BMI >= 25 && BMI < 30){
                printf("Tiene sobrepeso.");}
                else{
                    printf("Tiene obesidad.");}
    
  return 0;
}
