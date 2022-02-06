#include <stdioh>
int main(int argc, char*argv[])
{
double radice;
double somma=0;
int a;
do
{
        printf("scrivi il numero che vuoi\n")
        scanf("%d",&a);
        if(a=>0)
          {
            radice=sqrt(a);
            somma=somma+radice;
            printf("la somma delle radiciè:%f",somma);
          }
        else

            printf("non è possibile fare il calcolo perchè non si può fare la radice di un >

}while(a=>0);
}
