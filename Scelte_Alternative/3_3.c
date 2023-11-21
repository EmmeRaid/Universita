#include <stdio.h>

int PositivNegativ(int a)
{

    if (a < 0)
    {
        puts("********");
    }
    else if (a == 0)
    {
        puts("$$$$$$$$");
        puts("********");
    }
    else
    {
        puts("$$$$$$$$");
    }
}

int main()
{

    int x;

    puts("Inserisci un numero ti verra' detto se e' positivo, nullo o negativo");

    scanf("%d", &x);

    PositivNegativ(x);

    return 0;
}