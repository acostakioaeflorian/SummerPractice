#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i,j,sum_dod = 0, sum_min = 0;
	int z[7][7];
	float average = 0;
	srand(time(NULL));
	
	for (i=0;i<7;i++)
		{
			for (j=0;j<7;j++)
			    {
				    z[i][j]=rand()%30-10;
				    printf ("%4.2d ",z[i][j]);
			    }
			printf ("\n\n");
		}

    int k = 0;
    for ( i = 0; i < 7; i++)
    {
        
        for ( j = 0; j < 7-k; j++)
        {
            if (z[i][j]>0)
            {
                sum_dod+=z[i][j];
            }

            if (z[i][j]<0)
            {
                sum_min+=z[i][j];
            }    
        }
        k++;
    }
    k=0;
printf ("==================================\n\n");
    for ( i = 0; i < 7; i++)
    {
        
        for ( j = 0; j < 7-k; j++)
        {
           printf ("%4.2d ",z[i][j]);
        }
        k++;
        printf ("\n\n");
    }

    average = (float)(sum_min+sum_dod)/2;
    printf ("Sum dod = %d\n",sum_dod);
    printf ("Sum min = %d\n",sum_min);
    printf ("Average = %f\n",average);

	printf ("\n");
	system ("pause");
	return 0;
}
