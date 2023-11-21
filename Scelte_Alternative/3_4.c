#include <stdio.h>

int valoreAssoluto(int a)
{

    a = -a;

    return a;
}

int main()
{

    int x;

    puts("Questo proramma di restituisce il valore assoluto del numero inserito");

    scanf("%d", &x);

    if (x < 0)
        printf("Il valore assoluto di %d = %d\n", x, valoreAssoluto(x));
    else
        printf("Il valore assoluto di %d = %d\n", x, x);    
}