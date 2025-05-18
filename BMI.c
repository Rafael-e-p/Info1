#include <stdio.h>

int main()
{
    
    float peso;
    float altura;
    float bmi;

    printf("ingrese su peso en kg: ");
    scanf("%f", &peso);
    
    printf("ingrese su altura en metros: ");
    scanf("%f", &altura);

    bmi = peso / (altura*altura);
   
 
    if(bmi < 18.5){
        printf("Su BMI es: %.2f \nPeso es bajo.", bmi);}
        else if(bmi >= 18.5 && bmi < 25){
            printf("Su BMI es: %.2f \nSu peso es normal.", bmi);}
            else if(bmi >= 25 && bmi < 30){
                printf("Su BMI es: %.2f \nTiene sobrepeso.", bmi);}
                else{
                    printf("Su BMI es: %.2f \nTiene obesidad.", bmi);}


    return 0;
}
