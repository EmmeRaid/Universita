#include <stdio.h>

int Addizione(int a, int b)
{

    int Addizione;

    Addizione = a + b;

    return Addizione;
}

int main()
{

    int x, y;

    puts("Inserisci due numeri verra' visualizzata la sua somma");
    scanf("%d %d", &x, &y);

    printf("%d + %d = %d", x, y, Addizione(x, y));
    
}