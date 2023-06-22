#include <stdio.h>
#include <stdlib.h>

int main() {

    int aux = 0;
    int casa1 = 0;
    int casa2 = 0;
    int soma = 0;

    //intervalo de números de 4 algarismos

    for(int i = 32; i < 100; i++) {

        aux = i * i;

        casa1 = aux / 100;
        casa2 = aux % 100;
        soma = casa1 + casa2;

        if(soma == i) {

            printf("%d\n", aux);

        }

    }
    
    return 0;

}