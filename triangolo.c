#include <stdio.h>

int main(){
    float base =0.0f;
    float altezza =0.0f;

    printf("Inserisci la base ");
    scanf("%f",&base);
    printf("Inserisci l'altezza ");
    scanf("%f",&altezza);

    float area = (base*altezza)/2;
    printf("L'area del triangolo è : %.2f\n",area);


}