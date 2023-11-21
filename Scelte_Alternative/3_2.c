#include <stdio.h>

int PositivNegativ(int a)
{

    if (a < 0)
    {
        puts("Il numero e' negativo");
    }
    else if (a == 0)
    {
        puts("Il numero e' nullo");
    }
    else
    {
        puts("Il numero e' positivo");
    }
}


int main(){

    int x;

    puts("Inserisci un numero ti verra' detto se e' positivo, nullo o negativo");

    scanf("%d",&x);

    PositivNegativ(x);

    return 0;

}