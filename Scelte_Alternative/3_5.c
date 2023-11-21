#include <stdio.h>

int PositivNegativ(int a)
{

    if (a < 0)
    {
        printf("Il B e' negativo %d\n", a);
    }
    else if (a == 0)
    {
        printf("Il B e' nullo %d\n", a);
    }
    else
    {
        printf("Il B e' positivo %d\n", a);
    }
}

int PariDispari(int a)
{

    if (a % 2 == 0)
    {
        printf("E' un numero pari %d\n", a);
    }
    else
    {
        printf("E' un numero dispari %d\n", a);
    }
}

int valoreAssoluto(int a)
{

    a = -a;

    return a;
}

int main()
{
    int a, b;

    puts("Inserisci due numeri A e B");

    scanf("%d %d", &a, &b);

    PositivNegativ(b);
    PariDispari(a);

    int somma = a + b;

    printf("La somma tra A e B = %d\n", somma);

    if (a < 0)
    {
        a = valoreAssoluto(a);
    }

    if (b < 0)
    {
        b = valoreAssoluto(b);
    }

    somma = a + b;

    printf("La somma massima tra A e B = %d", somma);

    return 0;
}
