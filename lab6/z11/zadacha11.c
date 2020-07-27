#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char txt[60];
    int x,amount=0;
    printf ("Input name surname  . . .\n");
    gets(txt);
    
    x = strlen(txt);
    printf ("Amount of letters - %d",x);

    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (txt[i] == 'a')
            {
                count++;
            }
    }
    printf ("\nAmount of a - %d\n\n",count);
    
    // not standart function
    printf ("Name - ");
    int k=0;
    for ( int i = 0; i < x; i++)
    {
        if (txt[i] == ' ')
            k++;
        
        if (k==1)
            printf ("%c",txt[i]);

        if (k==2)
            {   
                i++; // без пробела
                amount = x-i;
                k++;
            }
    }
    printf ("\nAmount of letters from last word - %d",amount);
    printf ("\n___________________________________________\n\n");

    // standart function
    char *token;
    token = strtok(txt," ");
    token = strtok(NULL," ");
    printf ("Name - ");
    printf( " %s\n", token );
    printf ("Amount of letters from last word - %d",strlen(strtok(NULL," "))); 


	printf ("\n\n\n\n");
	system ("pause");
	return 0;
}
