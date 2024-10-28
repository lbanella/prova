#include <stdio.h>

int main(){
    int a=0;
    int b=0;

    printf("Inserisci il primo numero ");
    scanf("%d",&a);
    printf("Inserisci il secondo numero ");
    scanf("%d",&b);

    

    printf("La somma di %d + %d = %d\n",a,b,a+b);
    printf("La differenza tra %d - %d = %d\n",a,b,a-b);
    printf("La moltiplicazione di %d * %d = %d\n",a,b,a*b);
    printf("La divisione di %d / %d = %d resto : %d \n",a,b,a/b,a%b);
}