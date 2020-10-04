#include <stdio.h>

int main (void) {

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    
    depois = &agora;

    (*depois).hora = 20; // primeira opção para utilizar o ponteiro com estruturas
    depois->minuto = 30;// segunda opção para utilizar o ponteiro com estruturas
    depois->segundo = 40;

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    return 0;

}