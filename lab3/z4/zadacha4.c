#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,b,multiply = 1;
    int f[4][7];

    printf ("Input B - ");
    scanf ("%d",&b);

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 6; j++)
            {
                f[i][j] = rand()% 20+1;
                printf ("%4.d",f[i][j]);
                if (f[i][j]>b)
                {
                    multiply = multiply * f[i][j];
                }    
            }         
        printf ("\n\n");
    }

    printf ("Multiply = %d",multiply);

    printf ("\n");
    system ("pause");
    return 0;
}