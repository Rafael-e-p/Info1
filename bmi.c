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
    
    if(BMI < 18.5){
        printf("Su BMI es: %.2f \nSu peso es bajo.", BMI);}
        else if(BMI >= 18.5 && BMI < 25){
            printf("Su BMI es: %.2f \nSu peso es normal.", BMI);}
            else if(BMI >= 25 && BMI < 30){
                printf("Su BMI es: %.2f \nTiene sobrepeso.", BMI);}
                else{
                    printf("Su BMI es: %.2f \nTiene obesidad.", BMI);}
    
    printf("Tabla de referencia de BMI:\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad");
     
     
    return 0;
