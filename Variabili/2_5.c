#include <stdio.h>
#include <math.h>

int AreaQ(int l)
{
    int area;

    area = l * l;

    return area;
}

int AreaC(int l)
{
    int area, ll;

    ll = l * l;

    area = (ll* 3.14) / 4;

    return area;
}

int AreaT(int l)
{

    int area;

    area = (sqrt(3) / 4) * (l * l);

    return area;
}

int main()
{

    int lato;

    puts("Insrisci un lato e verranno calcolate le varie misure:\n1.Area quadrato\n2.Area Cercio diametro D\n3.area triangolo equilatero lato l");

    scanf("%d", &lato);

    printf("Area Quadrato = %d\nArea Cerchio = %d\nAqrea Triangolo eq = %d\n", AreaQ(lato), AreaC(lato), AreaT(lato));
}