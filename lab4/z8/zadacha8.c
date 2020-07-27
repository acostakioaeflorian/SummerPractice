#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i,j,n;
	srand(time(NULL));
	
    printf ("Input N ");
    scanf ("%d",&n);

    int a[n][n];
    printf ("__________________Matrix_________________\n\n");
	for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			    {
				    a[i][j]=rand()%30-10;
				    printf ("%4.2d ",a[i][j]);
			    }
			printf ("\n\n");
		}
    printf ("_________________________________________\n\n");

    printf ("   Diagonal  ( 1 )   \n");
    for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			    {
                    if (i==j)
				    printf ("%4.2d ",a[i][j]);
			    }
		}

    printf ("\n\n");

    printf ("   Diagonal  ( 2 )   \n");
    int k=1;
    for ( i = 0; i < n; i++)
    {
        printf ("%4.2d ",a[i][n-k]);
        k++;
    }
    
    printf ("\n\n   Diagonal  ( 1 ) (above) DOUBLED ELEMENTS \n");
    for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			    {
                    if (j>i)
				    printf ("%4.2d ",2*a[i][j]);
			    }
		}

	printf ("\n");
	system ("pause");
	return 0;
}
