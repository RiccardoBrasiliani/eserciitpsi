#include<stdio.h>
#include<limits.h>
void Mostra(int vettore[], int conta)
{
    for(int j=0;j<conta;j++)
    {
        printf("element %d\n",vettore[j]);
    }
}
void Coda(int vettore[], int conta,int numerocoda)
{
    conta++;
    vettore[conta]=numerocoda;
    printf("il numero che hai inserito nella posizione %d è %d\n",numerocoda);
}
int Ricerca(int vettore[], int numricerca, int conta)
{
    for(int i=0;i<conta;i++)
    {
        if(vettore[i]=numricerca)
        {
            printf("%d",vettore[i]);
            return i+1;
        }
       
    } return-1;
}
void modifica(int vettore[], int conta, int numricerca)
{
    int nuovonumero;
    int posizione= Ricerca(vettore,numricerca,conta);
       printf("inserisci il nuovo numero");
       scanf("%d",&nuovonumero);  
}
void elimina(int vettore[],int conta)
{
    int position;
    printf("inserisci la posizione dell'elemento che vuoi eliminare, puoi eliminare fino a qui, %d\n", conta);
    scanf("%d",position);
    for(int i=position;i<conta-1;i++)
    {
        vettore[i]=vettore[i+1];
    }  
}
void InserisciInPosizione(int vettore[],int conta,int inserimentoPosizione)
{
    int newelement;
    for(int f=inserimentoPosizione;f=inserimentoPosizione+1;f++)
    {
        printf("inserisci l'elemento\n");
        scanf("%d",&newelement);
        vettore[f]=newelement; 
    }

}
void Contrario(int vettore[],int conta)
{
    for (int h=conta;h=0;h--)
    {
        printf("%d\n",&vettore[h]);
    }
}
int main(int argc,char*argv[])
{
    int conta=0;
    int vettore[INT_MAX];
    int numero;
    int risposta;
    int sentinella;
    int numerocoda;
    int numricerca;
    int inserimentoPosizione;
    
    for(int i=0;i<INT_MAX|| numero==-1;i++)
    {
        conta++;
        scanf("%d",&vettore[i]);
    }
    
    do{
        printf("permi[1] per mostrare il contenuto del vettore\n");
        printf("premi[2] per inserire un elemento in coda\n");
        printf("premi[3] per modificare un elemento\n");
        printf("premi[4] per cancellare un elemento\n");
        printf("premi[5] per ricercare un elemento\n");
        printf("premi[6] per inserire un numero in una certa posizione");
        printf("premi[7] per mostrare il contenuto dell'array al contrario\n");
        printf("premi[0] per uscire dal programma\n");
        scanf("%d",&risposta);
        if(risposta==1)
        {
            printf("il vettore contiene questi elementi\n");
            Mostra(vettore,conta); 
        }
        if(risposta==2)
        {
            printf("inserisci il numero in coda\n");
            scanf("%d",&numerocoda);
            Coda(vettore,conta,numerocoda);
        }
        if(risposta==3)
        {
            
            printf("inserisci l'elemento che vuoi che venga modificato\n");
            scanf("%d",&numricerca);
            modifica(vettore,conta,numricerca);

        }
        if(risposta==4)
        {
            elimina(vettore,conta);
        }
        if (risposta==5)
        {
            printf("inserisci il numero che vuoi ricercare\n");
            scanf("%d",&numricerca);
        }
        if(risposta==6)
        {
            printf("inserisci la posizione dell'elemento nella posizione\n");
            scanf("%d",&inserimentoPosizione);
            InserisciInPosizione(vettore,conta,inserimentoPosizione);
        }
        if (risposta==7)
        {
            printf("ecco stampato l'array al contrario\n");
            Contrario(vettore,conta);

        }
        if(risposta==0)
        {
            return 0; 
        }
        
    }while(risposta!=0);
}