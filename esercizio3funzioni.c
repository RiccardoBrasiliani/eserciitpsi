#include <stdio.h>
void ricerca(int argc, char*argv[], int num)
{
    int j;
    for(j=0;j<argc;j++)
    {
        if(num==atoi(argv[j]))
        {           
            return j; 
        }
        else 
        {
            return -1;
        }
    }
}
int main(int argc, char*argv[])
{
    int i;
    int num; 
    for(i=0;i<argc;i++)
    {
        scanf("%s",&argv[i]);
    }

    printf("inserisci un numero che vuoi cercare\n");
    scanf("%d",&num);

    int posizione= ricerca(argc, argv[]);
    if(posizione>0)
    {
        printf("il numero cè si trova in posizione:%d\n",posizione);
    }
    else 
    {
        printf("non cè il numero"); 
    }

    return 0;

}