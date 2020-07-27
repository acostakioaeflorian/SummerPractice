#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i,j,max = -200;
	
	int a[6] = {3,-63,12,-33,77,22};

    for ( i = 0; i < 6; i++)
    {
        printf ("%d  ",&a[i]);
        
        if (( a[i] < 0) && (a[i]>max))
            {
                max = a[i];
            }    
    }
            
    printf ("\n\nMax = %d",max);

	printf ("\n\n\n");
	system ("pause");
	return 0;
}
