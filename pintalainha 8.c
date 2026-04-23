#include <stdio.h>

int main() {
    int pessoas, reserva, horario;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    printf("Tem reserva? (1/0): ");
    scanf("%d", &reserva);

    printf("Digite o horario atual: ");
    scanf("%d", &horario);

   if(reserva == 1){
       printf("Atendimento Imediato!");
   }
   else{
       if((horario >= 12 && horario <= 14) || (horario >= 19 && horario <= 21)){
            if(pessoas <= 4){
                printf("Espera Curta.");
            }
           else{
               printf("Espera Longa.");
           }
       }
       else{
           printf("Atendimento Imediato!");
       }
   }