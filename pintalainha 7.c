#include <stdio.h>

int main() {
    float consumo;
    int horarioPico, energiaSolar;

    printf("Digite o consumo atual: ");
    scanf("%f", &consumo);

    printf("Horario de pico? (1/0): ");
    scanf("%d", &horarioPico);

    printf("Possui energia solar? (1/0): ");
    scanf("%d", &energiaSolar);

    if(horarioPico == 1){
        if(consumo > 300 && energiaSolar == 0){
            printf("Alerta de Alto Consumo!");
        }
        else{
            printf("Consumo Controlado.");
        }
    }
    else{
        if(consumo > 500){
            printf("Alerta de Consumo!");
        }
        else{
            printf("Consumo Normal.");
        }
    }
    return 0;
}