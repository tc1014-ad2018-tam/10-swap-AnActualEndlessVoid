/*
 * Este programa fue hecho con la intencion de ayudarle al usuario a ordenar 3 numeros de menor a mayor
 *
 * Mario Emilio Aguilar Chung
 * 9/13/2108
 * A01411210@itesm.mx
 *
 */
#include <stdio.h>

//Esta es la funcion que se encarga de ordenar los numeros
void order (double *a, double *b) {
    double intr;
//Aqui, si el primer numero es mayor que el segundo, se guardara en la locacion de memoria del segundo numero, el valor
//del primer numero y vice versa
    if(*a > *b) {
        intr = *a;
        *a = *b;
        *b = intr;
    }
}

int main() {
    //Aqui se le piden los numeros al usuario
    double num1, num2, num3;
    printf("Dame 3 numeros:\n ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    //Aqui se mandan a la funcion los 3 numeros en las diferentes parejas posibles
    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);
    //Aqui se le muestra el resultado al usuario
    printf("Mas chico=%lf\tIntermedio=%lf\tMas grande=%lf", num1, num2, num3);

    return 0;
}