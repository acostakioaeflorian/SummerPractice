#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
	int k=6,n=5,i,j;  // к - населені пункти         n - кандидати
	int a[k][n];
    int mass[k];

printf ("                Candidates     \n");
printf ("        [1]   [2]   [3]   [4]   [5]  \n");
printf ("      _____________________________\n");
    for (int i = 0; i < k; i++)
    {
        printf ("[%d]  |",i+1);
        for (int j = 0; j < n; j++)
        {
            a[i][j]=rand()%60+1;
            printf ("%5.2d ",a[i][j]);
        }
        printf ("\n     |\n");
    }

    int sum,count = 0;
    for ( i = 0; i < n; i++)
    {
        sum = 0;
        for ( j = 0; j < k; j++)
        {
            sum+=a[j][i];
        }
        mass[count] = sum;
        count++;
    }
    
    printf ("____________Votes___________\n");
    for ( i = 0; i < 5; i++)
    {
        printf ("         [%d]  -  %d\n",i+1,mass[i]);
    }

	printf ("\n");
	system ("pause");
	return 0;
}
