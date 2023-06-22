#include <stdio.h>
#include <stdlib.h>

int main() {

    int N = 0;
    double pi = 0.00;
    double numerador = 4;
    double denominador = 1;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {

        if((i % 2) == 1) {

            pi -= (numerador/denominador);
            denominador += 2;

        } else {

            pi += (numerador/denominador);
            denominador += 2;

        }
    }


    printf("%lf\n", pi);
}