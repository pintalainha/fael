#include <stdio.h>

int main() {
    float distancia;
    int premium, chuva;

    printf("Digite a distancia da entrega: ");
    scanf("%f", &distancia);

    printf("Cliente premium? (1/0): ");
    scanf("%d", &premium);

    printf("Esta chovendo? (1/0): ");
    scanf("%d", &chuva);

    if(premium == 1 && distancia <= 20){
        printf("Entrega Gratuita!");
    }
    else{
        if(distancia <= 10 && premium == 0){
            printf("Entrega Normal!");
        }
        else{
            printf("Entrega com Taxa!");
        }
    }

    return 0;
}