#include <stdioh>
int main (int argc char*argv[])
{
int a, b, c, differenza, contapari, contadispari, contanulli;
do
{
printf("inserisci il valore di a\n");
scanf ("%d,&a");
printf("inserisci il valore di b\n");
scanf ("%d,&b");
printf("inserisci il valore di c\n");
scanf ("%d,&b");
differenza=a-b;
if (differenza=0)
{
contanulli=contanulli+1;
}
else
if (differenza%2==0)
{
contapari=contapari+1;
}
else 
contadispari=contadispari+1;
}while(a+b=>c)
printf("Il contatore pari è arrivato a"&&"contapari");
printf("Il contatore dispari è arrivato a"&&"contadispari");
printf("Il contatore dei nulli è arrivato a"&&"contanulli");
}
}
