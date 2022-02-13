#include <stdioh>
int main(int argc, char*argv[])
{
int n, rapp;
printf("inserisci un valore che vuoi\n");
scanf("%d",&n);
while(n<0)
{
printf("inserisci il valore\n");
scanf ("%d",&n);
}
for (int i=n; i>0; i--);
{
if(i%2!=0)
{
printf("%d\n",i);
}
}
return=0;
}

