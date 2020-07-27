#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,count = 0,buff;
    int d[12];

    for ( i = 0; i < 11; i++)
    {
        d[i] = rand()% 10-4;
        printf (" %d ",d[i]);
        if (d[i]<0)
        {
            count++;
        }    
    }
    printf (" --- Massiv D\n");

    int z[count];
    int k = 0;
    for ( i = 0; i < 11; i++)
    {     
        if (d[i]<0)
        {
            z[k] = d[i];
            k++;
        }    
    }
    
    for (i = 0; i < count; i++)
    {
        for ( j = 0; j < count-1; j++)
        {
            if (z[j] > z[j+1])
            {
                buff = z[j];
                z[j] = z[j+1];
                z[j+1] = buff;
            }
        }    
    }
    
    for ( i = 0; i < count; i++)
    {
        printf ("%d ",z[i]);
    }

    printf (" --- Massiv Z\n");

    printf ("\n");
    system ("pause");
    return 0;
}