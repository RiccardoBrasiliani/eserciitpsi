#include <stdio.h>
int main(int argc, char*argv[])
{
    int num;
    int array[num];
    int cont1=0;
    double media; 
    int i;
    printf("inserisci dei numeri\n");
    do
    {
        scanf("%d",&num);
        cont1++;
        cont2++;

    }while(num!=0);

    for(i=0;i<cont1;i++)
    {
        media=media+array[i];
    }
    media=media/cont1;
    printf("La media è %d\n", media);

    for(int i=0;i<cont1;i++)
    {
        if(arrray[i]>media)

            printf("%d\n",array[i]);
    }
}