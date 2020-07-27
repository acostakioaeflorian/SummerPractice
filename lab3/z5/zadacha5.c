#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i,j,min=99,x1,y1,last;
	int l[5][6];
	
	srand(time(NULL));
	
	for (i=0;i<5;i++)
		{
			for (j=0;j<6;j++)
			{
				l[i][j]=rand()%30-5;
				printf ("%3.2d ",l[i][j]);
			}
			printf ("\n");
		}

    last = l[4][5]; 

	for (i=0;i<5;i++)
		{
			for (j=0;j<6;j++)
			{
				if (l[i][j]<min)
				{
					min=l[i][j];
					x1=i;
					y1=j;
				}
			}	
		}
	l[4][5] = min;	
    l[x1][y1] = last; 

			printf ("\n");
			
			for (i=0;i<5;i++)
		        {
			        for (j=0;j<6;j++)
			            {
				            printf ("%3.2d ",l[i][j]);
			            }
			        printf ("\n");
		        }       
		
		printf ("\n");
		system ("pause");
	return 0;
}
