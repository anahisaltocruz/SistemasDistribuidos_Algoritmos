/*
    4. Mediante el uso de funciones y paso de par�metros por valor, implemente una
    calculadora que realice las 4 operaciones b�sicas (suma, resta, multiplicaci�n y
    divisi�n). El programa debe permitir al usuario introducir los n�meros a utilizar,
    elegir la operaci�n a realizar e imprimir el resultado. Se deben implementar las
    validaciones adecuadas.
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    system("color D0");
    do{
        char ans;
        printf("\t\t\tI N I C I O  D E L  P R O G R A M A\n\n");
        printf("�Bienvenido! Por favor elija una opci�n:\n");
        printf("    a. Suma\n");
        printf("    b. Resta\n");
        printf("    c. Multipliacacion\n");
        printf("    d. Division\n");
        printf("    x. Salir\n");
        scanf("%c",ans);
        printf("ans: %c\n",ans);
    }while(ans != x);
    return 0;
}
