#include <stdio.h>

int main(void) {
    float salario_bruto, porcentaje, descuento, salario_neto;

    printf("Ingrese el salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &porcentaje);

    descuento = salario_bruto * porcentaje / 100;
    salario_neto = salario_bruto - descuento;

    printf("Salario bruto: %.2f\n", salario_bruto);
    printf("Descuento: %.2f\n", descuento);
    printf("Salario neto: %.2f\n", salario_neto);

    return 0;
}
