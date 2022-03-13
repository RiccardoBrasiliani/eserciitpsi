#include <stdio.h>
void swap(int numeri[])
{
   int i;
   int t;
   for (i=0;numeri%2;i++)
   {
      t=numeri[]-1;
      numeri=i;
      i=t;
      
   }
}


int main(int argc, char*argv[])
{
    int numero; 
    int i; 
    int numeri[5]; 

    for (i=0; i<5;i++)
    {
        do 
        {
        printf("inserisci un numero\n");
        scanf("%d",&numero);
        }while(numeri[i]<0)
    }
    swap(numeri[i]);
    
    for (i=0;i<5;i++)
    {
        printf(numeri[i]);
    }
}