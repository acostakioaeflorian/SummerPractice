#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomizing(int *mas,int k)
{
	for (int i = 0; i < k; i++)
	{
		mas[i] = rand()%60;
	}	
}

int dobutok(int *mas,int k)
{
	int x1,x2;
	for (int i = 0; i < k; i++)
	{
		if (i==0)
		{
			x1 = mas[i];
		}
		
		if (i==k-1)
		{
			x2 = mas[i];
		}
	}

	return x1*x2;
}

float seredne (int *mas,int k)
{
	float sum = 0;
	
	for (int i = 0; i < k; i++)
	{
		sum += mas[i];
	}
	sum = 1.0*sum / k;
	return sum;
}

int dobutok_30_50 (int *mas,int k)
{
	int doub = 1;

	for (int i = 0; i < k; i++)
	{
		if ((mas[i]<50) && (mas[i]>30))
			{
				doub = doub * mas[i];
			}
	}
	return doub;
}

int sum_30_50 (int *mas,int k)
{
	int sum = 0;

	for (int i = 0; i < k; i++)
	{
		if ((mas[i]<50) && (mas[i]>30))
			{
				sum += mas[i];
			}
	}
	return sum;
}

int main() 
{
	srand(time(NULL));

    int k,j;
	printf ("Input  k  1-12   =  ");
	scanf ("%d",&k);

	int y[k];

	randomizing(y,k);
	printf ("\n");

	for ( j = 0; j < k; j++)
	{
		printf ("%d  ",y[j]);
	}
	
	printf ("\n\nDobutok 1st el and last el  = %d\n",dobutok(y,k));
	printf ("\nAverage = %.2f\n",seredne(y,k));
	printf ("\nMultiplying of numbers  = %d\n",dobutok_30_50(y,k));
	printf ("\nSum of numbers  = %d\n",sum_30_50(y,k));
	printf ("\n\n\n");
	system ("pause");
	return 0;
}
