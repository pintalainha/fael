#include <stdio.h>

int main() {
    float cpu, memoria;
    int erroCritico;

    printf("Digite o uso de CPU: ");
    scanf("%f", &cpu);

    printf("Digite o uso de memoria: ");
    scanf("%f", &memoria);

    printf("Ha erro critico? (1/0): ");
    scanf("%d", &erroCritico);

    if(erroCritico == 1){
        printf("Alerta Máximo!");
    }
    else{
        if(cpu > 80 && memoria > 80){
            printf("Alerta Alto!");
        }
        else if(cpu > 80 || memoria > 80){
            printf("Alerta Médio!");
        }
        else{
            printf("Funcionamento Normal...");
        }
    }

    return 0;
}