#include <stdio.h>

int main()
{

    int a;
    double b;

    puts("Inserisci due numeri con B!=0, successivamente verra' visualizzato il risultato delle quattro operazioni");

    scanf("%d %le", &a, &b);

    if (b != 0)
    {
        double div = a / b;
        int somma = a + b, diff = a - b, molto = a * b;

        printf("Somma =%d\nDiff =%d\nMolt =%d\nDiv =%.2f", somma, diff, molto, div);
    }
    else
    {
        puts("Inserisci un valore di B != 0");
    }
}