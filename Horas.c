// ALUNO: GILBERTO RODRIGUES DA SILVA (02/09/2023)


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float hora;
    int horas, minutos, segundos;

    printf("Digite uma hora no formato (exemplo: 15.35): ");
    scanf("%f", &hora);

    horas = (int)hora;
    minutos = (hora - horas) * 100;
    segundos = minutos * 60;

    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59) {
        printf("Equivalente a %d minutos e %d segundos.\n", minutos, segundos);
    } else {
        printf("Hora inválida. Certifique-se de que as horas estão entre 0 e 23 e os minutos entre 0 e 59.\n");
    }

    return 0;
}
