// ALUNO: GILBERTO RODRIGUES DA SILVA (02/09/2023)


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float horas;
    int hora, min;
    int i = 0;
    while (i == 0){
        printf("Informe a hora:");
        scanf("%f", &horas);
        hora = (int)horas;
        min = (int)(round((horas - hora) * 100));
        if ( hora < 0 || hora >23 || min > 59){
            printf("Formato de número invalido\n");
            printf("TENTE NOVAMENTE COM OUTROS VALORES\n");
        }
        else{
            printf("%.2f equivale a %d horas e %d minutos\n", horas, hora, min);
            i = 1;
        }
    }
    return 0;
}
