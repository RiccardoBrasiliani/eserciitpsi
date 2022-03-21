#include <stdio.h>
#include <string.h>
int main(int argc, char*argv[]);
{
    int data; 
     
do
{
    printf("scrivi una data\n");
    scanf("%d",&data);
   

    int giorno = data / 1000000;
    int mese = data / 10000 - giorno * 100;
    int anno = data%10000;

    if (giorno <= 31)
    {
        printf("il giorno è coretto\n");
    }
    if (mese<=12)
    {
        printf("il mese è coretto\n");
    }
    if (anno<=2022)
    {
        printf("l hanno è coretto\n");
    }
    else 
    {
        printf("devi inserire un anno corettp\n");

    }
    else 
    {
        printf("devi inserire un mese coretto\n");

    }
    else 
    {
        printf("non esiste un mese maggiore di 12\n");
    }
}while(data!="");

printf("la data è: %d", valore); 

return 0;
}
