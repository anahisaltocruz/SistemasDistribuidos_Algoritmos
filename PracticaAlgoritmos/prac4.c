/*
    4. Mediante el uso de funciones y paso de parámetros por valor, implemente una
    calculadora que realice las 4 operaciones básicas (suma, resta, multiplicación y
    división). El programa debe permitir al usuario introducir los números a utilizar,
    elegir la operación a realizar e imprimir el resultado. Se deben implementar las
    validaciones adecuadas.
*/
#include <stdlib.h>
#include <stdio.h>

float suma(float a, float b){
    return a + b;
}

float resta(float a, float b){
    return a - b;
}

float mult(float a, float b){
    return a * b;
}

float divi(float a, float b){
    return a / b;
}

int main(){
    system("color D0");
    char ans = ' ';
    do{
        system("cls");
        printf("\t\t\tI N I C I O  D E L  P R O G R A M A\n\n");
        printf("¡Bienvenido! Por favor elija una opción:\n");
        printf("    a. Suma\n");
        printf("    b. Resta\n");
        printf("    c. Multiplicacion\n");
        printf("    d. Division\n");
        printf("    x. Salir\n");
        printf("Opcion: ");
        fflush(stdin);
        scanf("%c",&ans);
        float a, b;
        int resultado;
        switch (ans){
            case 'a':
                //Suma
                printf("Introduzca el valor del sumando a: ");
                resultado = scanf("%f", &a);
                if (resultado != 1) {
                    printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                    system("pause");
                }else if(resultado == 1){
                    printf("Introduzca el valor del sumando b: ");
                    resultado = scanf("%f", &b);
                    if (resultado != 1) {
                        printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                        system("pause");
                    }else if(resultado == 1){
                        //suma(a,b);
                        printf("Resultado: %0.2f\n\n",suma(a,b));
                        system("pause");
                    }
                }
                break;
            case 'b':
                //Resta
                printf("Introduzca el valor del minuendo a:   ");
                resultado = scanf("%f", &a);
                if (resultado != 1) {
                    printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                    system("pause");
                }else if(resultado == 1){
                    printf("Introduzca el valor del sustraendo b: ");
                    resultado = scanf("%f", &b);
                    if (resultado != 1) {
                        printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                        system("pause");
                    }else if(resultado == 1){
                        //resta(a,b);
                        printf("Resultado: %0.2f\n\n",resta(a,b));
                        system("pause");
                    }
                }
                break;
            case 'c':
                //Multiplicacion
                printf("Introduzca el valor del factor a: ");
                resultado = scanf("%f", &a);
                if (resultado != 1) {
                    printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                    system("pause");
                }else if(resultado == 1){
                    printf("Introduzca el valor del factor b: ");
                    resultado = scanf("%f", &b);
                    if (resultado != 1) {
                        printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                        system("pause");
                    }else if(resultado == 1){
                        //mult(a,b);
                        printf("Resultado: %0.2f\n\n",mult(a,b));
                        system("pause");
                    }
                }
                break;
            case 'd':
                //Division
                printf("Introduzca el valor del dividendo a: ");
                resultado = scanf("%f", &a);
                if (resultado != 1) {
                    printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                    system("pause");
                }else if(resultado == 1){
                    printf("Introduzca el valor del divisor b:   ");
                    resultado = scanf("%f", &b);
                    if (resultado != 1) {
                        printf("El dato ingresado no es un número, intente de nuevo.\n\n");
                        system("pause");
                    }else if(resultado == 1){
                        //div(a,b);
                        printf("Resultado: %0.2f\n\n",divi(a,b));
                        system("pause");
                    }
                }
                break;
            default:
                if(ans != 'x'){
                    printf("Por favor elija una opcion valida...\n");
                    system("pause");
                    break;
                }
        }
    }while(ans != 'x');
    return 0;
}
