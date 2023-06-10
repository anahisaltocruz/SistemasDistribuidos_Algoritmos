/*
    5. Considere un problema de conversión de fechas, de día del mes a día del año y
    viceversa. Por ejemplo el 1 de marzo corresponde al día 60 de un año que no es
    bisiesto y al día 61 de un año que si lo es. Defina dos funciones de conversión. Una
    que permita convertir un mes y día dado en el día del año correspondiente y otra
    función que permita convertir el día del año en el mes y día correspondiente. El
    usuario debe proporcionar los datos de entrada. El programa debe imprimir la salida
    correspondiente a la conversión deseada.
*/
#include <stdio.h>

int esBisiesto(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1; // Es bisiesto
    else
        return 0; // No es bisiesto
}

int convertir_diaMes_diaAnio(int mes, int dia, int es_bisiesto) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diaDelAnio = 0;
    int i;

    for (i = 1; i < mes; i++) {
        diaDelAnio += diasPorMes[i];
    }

    diaDelAnio += dia;

    if (es_bisiesto && mes > 2) {
        diaDelAnio += 1;
    }

    return diaDelAnio;
}

void convertir_diaAnio_diaMes(int diaDelAnio, int es_bisiesto, int *mes, int *dia) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    if (es_bisiesto) {
        diasPorMes[2] = 29;
    }

    for (i = 1; i <= 12; i++) {
        if (diaDelAnio <= diasPorMes[i]) {
            break;
        }

        diaDelAnio -= diasPorMes[i];
    }

    *mes = i;
    *dia = diaDelAnio;
}

int main() {
    int mes, dia, dia_anio;
    int es_bisiesto, opcion;
    while (1)
    {
        printf("Ingrese 1 si quiere convertir de dia de mes a dia del año, de lo contrario ingrese 2\nSi desea salir ingrese 0");
        scanf("%d",&opcion);
        if (opcion == 1)
        {
            printf("Ingrese el mes: ");
            scanf("%d", &mes);

            printf("Ingrese el día: ");
            scanf("%d", &dia);

            printf("Ingrese 1 si el año es bisiesto, de lo contrario ingrese 0: ");
            scanf("%d", &es_bisiesto);
            dia_anio = convertir_diaMes_diaAnio(mes, dia, es_bisiesto);
            printf("El día del año correspondiente es: %d\n", dia_anio);

        }
        else if(opcion == 2)
        {
            printf("Ingrese el día: ");
            scanf("%d", &dia);
            printf("Ingrese 1 si el año es bisiesto, de lo contrario ingrese 0: ");
            scanf("%d", &es_bisiesto);
            convertir_diaAnio_diaMes(dia_anio, es_bisiesto, &mes, &dia);
            printf("La fecha correspondiente es: %d de %d\n", dia, mes);
        }
        else
        {
            break;
        }
    }
    return 0;
}

