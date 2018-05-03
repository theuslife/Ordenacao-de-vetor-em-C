#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10] = {5, 3, 7, 9, 1, 2,6,4,8,10};
    int suporte;
    for (int cont = 0; cont < 10; ++cont){
        for (int cont2 = x+1; cont2 < x; ++cont2){
            if (vetor[cont] > vetor[cont2]){
               suporte = vetor[cont];
               vetor[cont] = vetor[cont2];
               vetor[cont2] = suporte;
            }
        }
    }

    for (int cont = 0; cont < 10; ++cont){
        printf("%i ", vetor[cont]);
    }
    return 0;
}
