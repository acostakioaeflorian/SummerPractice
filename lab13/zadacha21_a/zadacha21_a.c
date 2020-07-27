#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k = 0;
    char txt[60],doubled[60],single[60],fin[60];
    printf ("Input string:  ");
    gets(txt);
    strcpy(single,txt);
    
    char *tok=strtok (txt," ,.");
  	while (tok!=NULL)
  		{	
			for ( i = 0; i < strlen(tok); i++)
            {
                if (tok[i]==tok[i+1])
                {
                    for ( j = 0; j < strlen(tok); j++)
                    {
                        doubled[k] = tok[j];
                        k++;
                    }
                    doubled[k] = ' ';
                    k++;
                }    
            }
      		tok=strtok(NULL," ,.");
  		}
          
    printf ("\nWords with doubled letters:   ");
    for ( i = 0; i < k; i++)
    {
        printf ("%c",doubled[i]);
    }
/////////////////////////////////////////////////////////////

    k = 0;
    int count = 0;

    char *lok=strtok (single," ,.");
  	while (lok!=NULL)
  		{	
			for ( i = 0; i < strlen(lok); i++)
            {
                if (lok[i]==lok[i+1])
                {
                    count = 1;
                }    
            }
            
            if ( count == 0)
            {
                for ( j = 0; j < strlen(lok); j++)
                    {
                        fin[k] = lok[j];
                        k++;
                    }
                    fin[k] = ' ';
                    k++;
            }
            count = 0;
      		lok=strtok(NULL," ,.");
  		}
          
    printf ("\nWords with single letters:   ");
    for ( i = 0; i < k; i++)
    {
        printf ("%c",fin[i]);
    }

    printf ("\n");
    system ("pause");
    return 0;
}