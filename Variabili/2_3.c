#include <stdio.h>


int prec(int a){

    int prec;

    prec = --a;

    return prec;
    
}

int succ(int a){

    int succ;

    succ = ++a;

    return succ;
}


int main(){

    int x;



    puts("Inserisci un numero verra' visualizzato il precednete e il successivo ");

    scanf("%d", &x);

    printf("precedente = %d \n x = %d\nSuccessivo = %d", prec(x),x,succ(x));



}