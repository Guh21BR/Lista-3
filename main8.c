#include <stdio.h>

int main() {
    int numero = 1;
    while (numero <= 10) {
        printf("Tabuada do %d:\n", numero);
    int    tabuada = 1;
        while (tabuada <= 10) {
            printf("%d x %d = %d\n", numero, tabuada, numero * tabuada);
            tabuada++;
        }
        printf("\n");
        numero++;
    }
    return 0;
}
