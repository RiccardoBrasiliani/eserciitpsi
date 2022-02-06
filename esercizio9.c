#include <stdioh>
int main(int argc, char*argv[])
{
int a,b,c,massimo,minimo;
do 
{
printf ("inserisci il valore di a\n");
scanf ("%d",&a);
printf ("inserisci il valore di b\n");
scanf ("%d",&b);
printf ("inserisci il valore di c\n");
scanf ("%d",&c);

if (a < b && b < c)
{

if (a < min)
min = a;
if (c > max)
max = c;
}
else
printf("hai inserito i valori nell'ordine sbagliato\n");
}while(a >= 0 && b >= 0 && c >= 0);

