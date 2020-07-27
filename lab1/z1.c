#include <stdlib.h>
#include <stdio.h>

int main()
{
    float x,y;

    printf ("Input x: ");
    scanf  ("%f",&x);

    printf ("Input y: ");
    scanf  ("%f",&y);

    if ((x<0) && (y<0))      // 3 чверть
    {
        printf ("Point isn't in this area (3)");
        printf ("\n");
        system ("pause");
        return 0;
    }

    if ((x>=0) && (x<=1) && (y>=0) && (y<=1))
    {
        printf ("Point is in this area (1) ");      // 1 чверть
        printf ("\n");
        system ("pause");
        return 0;
    }
    
    if ((x<=0) && (x>=-1) && (y>=x*(-1)) && (y>=0) && (y<=1))    // 2 чверть    
    {
        printf ("Point is in this area (2)");
        printf ("\n");
        system ("pause");
        return 0;
    }

     if ((x>=0) && (x<=1) && (y*(-1)<x) && (y<=0) && (y>=-1))      // 4 чверть      
    {
        printf ("Point is in this area (4)");   
        printf ("\n");
        system ("pause");
        return 0;
    }

    printf ("Point isn't in this area");
    printf ("\n");
    system ("pause");
    return 0;
}