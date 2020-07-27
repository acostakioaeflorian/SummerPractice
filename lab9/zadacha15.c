#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    int n;
    printf ("Input N = ");
    scanf ("%d",&n);

    int *a=(int *)malloc(n*sizeof(int));
    int *b=(int *)malloc(n*sizeof(int));
    int *c=(int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand ()% 30-7;
        printf ("%d  ",a[i]);
    }
    printf (" --- Massiv A\n\n");
    
    for (int i = 0; i < n; i++)
    {
        b[i] = rand ()% 30-7;
        printf ("%d  ",b[i]);
    }
    printf (" --- Massiv B\n\n");
    
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf ("%d  ",c[i]);
    }
    printf (" --- Massiv C\n\n");

    free(a);
    free(b);
    free(c);

  printf ("\n");
  system ("pause");
  return 0;
}
