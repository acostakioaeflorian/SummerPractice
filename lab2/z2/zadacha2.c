#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,sum = 0,count = 0;
    float ser = 0;
    int t[9];

    for ( i = 0; i < 8; i++)
    {
        t[i] = rand()% 10-3;
        printf ("[%d] - %d \n",i,t[i]);
        if (t[i]<0)
        {
            sum += i;
            count++;
        }    
    }
    
    ser = (float)sum / count;

    printf ("%.2f ",ser);

    printf ("\n");
    system ("pause");
    return 0;
}