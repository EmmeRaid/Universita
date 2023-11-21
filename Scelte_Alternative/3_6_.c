#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, ipo;
    int al, bl;

    puts("Questo programma ti classifichera' il triangolo di 3 lati insriti da utente");

    scanf("%d %d %d", &a, &b, &c);

    al = sqrt((a * a));
    bl = sqrt((b * b));
    ipo = sqrt((c * c));

    if (a == b && b == c)
    {
        puts("TRIANGOLO EQUILATERO");
    }
    else if (al + bl == ipo)
    {
        puts("TRIANGOLO RETTANGOLO");
    }
}