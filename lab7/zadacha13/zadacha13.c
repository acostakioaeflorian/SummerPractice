#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomizing(int **mas,int n,int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mas[i][j] = rand()%20-7;
		}
	}	
}

void min_i_j(int **mas,int n,int m,int *px,int *py)
{
	int min = 100;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mas[i][j]<min)
			{
				min = mas[i][j];
				*px = i+1;
				*py = j+1;
			}	
		}
	}	
}

int dobutok_videmnyh (int **mas,int n,int m)
{
	int doub = 1;
	for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (mas[i][j] < 0)
					{
						doub = doub * mas[i][j];
					}
			}	
		}		
	return doub;
}

int main() 
{
	srand(time(NULL));

    int m,n,i,j;
	printf ("Input  n = ");
	scanf ("%d",&n);
	printf ("Input  m = ");
	scanf ("%d",&m);

	int **a=(int **)malloc(n*sizeof(int *));
  		for(i=0;i<n;i++) 
  			{             
    			a[i]=(int *)malloc(m*sizeof(int));
  			}	
			  
	printf ("\n");
	randomizing (a,n,m);

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < m; j++)
		{
			printf ("%4.2d  ",a[i][j]);
		}
		printf ("\n\n");
	}
	
	printf ("\nMultiplying of negative elements = %d\n",dobutok_videmnyh(a,n,m));
	int x,y;
	min_i_j(a,n,m,&x,&y);

	printf ("\n\nIndex of min element (%d;%d)",x,y);

	for(int i = 0; i < n; i++) 	
	{
    	free(a[i]);
  	}
  	free(a);

	printf ("\n\n\n");
	system ("pause");
	return 0;
}
