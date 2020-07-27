#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *document;
    int n,i = 0,k = 1;

    document = fopen("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab13\\zadacha20\\Zadacha20.txt","w");

    printf ("Input number n:  ");
    scanf  ("%d",&n);

    while (k<=n)
    {
         if ((i>0) && (i%2==0))
            {
                fprintf (document,"[%d number] = %d\n",k,i);
                k++;
            }
        i++;
    }
    
    fclose(document);

    printf ("\n");
    system ("pause");
    return 0;
}