#include <stdio.h>

int Media (int a, int b){

    int media = (a + b) / 2;

    return media;

}


int main()
{

    int x, y;

    puts("Inserisci due numeri verra' visualizzata la loro media");
    scanf("%d %d", &x, &y);

    printf("la media tra = %d,%d e' = %d", x, y, Media(x, y));
    
}