#include <stdio.h>
int main(int argc, char*argv[]);
{
int num;
int cont=0;
int somma;
int i;
double media=0;
int array[num];
int j; 
int cont2=0;

printf("insersci una serie di numeri");
do
{
    cont2++;
    cont++; 
    somma=somma+num;
    scanf("%d",&num); 
    array[cont]=num;

}while(num!=0);

media= (double)somma / (double)cont2;
printf("\n la media è:%f\n",media);

for (i=0;i<array[num];i++)
{
 i=array[i];
 printf("i valori sono: %d", i);
}

for (j=1;j=array[num]-1;j--)
{
  j=array[j];
  if(j>media)
  {
      printf("il valore è maggiore della media:%d", j);
  }
  else 
  {
      printf("il numero non era maggiore della media");
  }
}
return=0; 
}
