#include <stdio.h>
#include<stdlib.h>
int ricerca(int num, char *argv[], int argc)
{
    for (int i = 1; i < argc;i++)
    {
        if (atoi(argv[i]) == num)
        {
            return i;
        }
    }
    return -1;
}
int main(int argc, char *argv[])
{
    int num;
    int posizione;
    printf("incrisci il numero che vuoi cercare\n");
    scanf("%d", &num);

    posizione = ricerca(num, argv, argc);
    if (posizione > 0)
    {
        printf("il numero è stato trovato e si trova nella: %d posizone\n", posizione);
    }
    else
    {
        printf("numero non trovato\n");
    }

    return 0;
}
