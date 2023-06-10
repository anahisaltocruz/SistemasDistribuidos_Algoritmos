/*
    7. Implemente un programa que permita convertir de mayúsculas a minúsculas depen-
    diendo de la acción que se invoque. El mensaje a convertir debe ser introducida por
    el usuario.
*/
#include <stdio.h>
#include <string.h>

int main() {
    system("color D0");
    char oracion[100];
    char opc;
    printf("\tI N I C I O  D E L  P R O G R A M A\n\n");
    printf("Ingrese una cadena: ");
    fgets(oracion, sizeof(oracion), stdin);
    printf("\n¿Que desea realizar?\n");
    printf("    a. Convertir todos los caracteres a mayusculas\n");
    printf("    b. Convertir todos los caracteres a minusculas\n");
    printf("Opcion: ");
    scanf("%c",&opc);
    if(opc == 'a'){
        for(int i = 0; i<strlen(oracion); i++){
            oracion[i] = toupper(oracion[i]);
        }
        printf("R E S U L T A D O: %s\n\n",oracion);
    }else if(opc == 'b'){
        for(int i = 0; i<strlen(oracion); i++){
            oracion[i] = tolower(oracion[i]);
        }
        printf("R E S U L T A D O: %s\n\n",oracion);
    }else
        printf("Opcion no valida\n\n");
    return 0;
}
