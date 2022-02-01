#include <stdioh>
int main (int argc char*argv[])
{
double n1;
double n2;
double r;
double radice;

do
{
printf("inserisci valore del n1\n");
scanf ("%d,&n1");
printf("inserisci valore del n2\n");
scanf ("%d,&n2");


if(n1>n2)
{
r=(double)n1 / (double)n2;
radice=sqrt(r);
}
else
{
r=(double)n2 / (double)n1;
radice= sqrt(r);
}
}while(r<0);
printf("il rapporto è un numero negativo e non si può fare la radice quadrata di un numero negativo\n");
return 0;
}
