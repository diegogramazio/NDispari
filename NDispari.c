#include <stdio.h>

/* Programma che chiede all'utente di inserire un intero positivo n da tastiera
 * e stampa i primi n numeri dispari. */
 int main() {
       int n;           // intero da leggere

       /* INPUT */
       printf("Introduci un intero positivo, please.\n");
       scanf("%d", &n);

       /* guarda i primi n numeri */
       for(int i=1;i<=n;i++)
             printf("%d", 2*i-1);
             system("PAUSE");
}
