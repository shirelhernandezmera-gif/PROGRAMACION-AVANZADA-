#include <stdio.h>

int main(void) {
    int i;

    printf("Numeros pares del 1 al 100:\n");

    for (i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
