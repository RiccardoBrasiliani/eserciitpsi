#include <stdioh>
int main (int argc char*argv[])
{
int n1;
int n2;
double rapporto;

do
{
printf ("inserisci il valore di n1\n");
scanf("%d,&n1");
printf("inserisci il valore di n2\n");
scanf("%d,&n2"); 

if (n1>n2)
{
rapporto=n2/n1;
}
else
{
rapporto=n1/n2;
}
}while(rapporto!=0);
}
