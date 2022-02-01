#include <stdio.h>
int main(int argc, char*argv[])
{
    int a,b,c, contavol=0, somma=0;
    double media;
    do
    {
        printf("Inserisci a: \n");
        scanf("%d", & a);
        printf("Inserisci b: \n");
        scanf("%d", & b);
    }while(a<b);
    do
    {
        printf("Inserisci c: \n");
        scanf("%d", & c);
        if(c>a && c<b)
        {
            somma = somma + c;
            contavol++;
        }
    }while(c>a && c<b);
    media = (double)c/(double)contavol;
    printf("La media è: %f", media);
