printf ("inserisci i numumeri che vuoi\n");
scanf("%d",&n);
while (n<0)
{
printf("valore non accetto\n");
scanf("%d",&n);
}
for(int i=0; i<n;i++)
{
if (i%2==0)
{
printf("%d\n",1);
}
}
return=0;

