#include <stdio.h>

int main()
{   // Dichiarazione delle variabili
    int numero1, numero2;  
    int prodotto; 

    printf("calcola la moltiplicazione tra due numeri\n");

    // Facciamo inserire all'utente il primo numero
    printf("inserisci il primo numero:\n"); 
    scanf("%d", &numero1);

    // Facciamo inserire all'utente il secondo numero
    printf("inserisci il secondo numero:\n");
    scanf("%d", &numero2);
    
    //calcolo del prodotto
    prodotto = numero1 * numero2;
    
    //stampiamo il risultato
    printf("il prodotto è: %d\n", prodotto);

    return 0;
}