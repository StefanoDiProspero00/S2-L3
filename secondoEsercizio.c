#include<stdio.h>

int main () {
    //dichiarazione delle variabili
    int numero1, numero2;
    float media;

    printf("Calcoliamo la media.\n");
    
    //facciamo inserire il primo numero
    printf("inserisci primo numero: ");
    scanf("%d",&numero1);
    
    //facciamo inserire il secondo numero
    printf("insersci secondo numero: ");
    scanf("%d",&numero2);
    
    //calcoliamo la media
    media = (numero1 + numero2)/2;

    //stampiamo il risultato
    printf("la media è: %6.2f\n", media);

    return 0;
    

}