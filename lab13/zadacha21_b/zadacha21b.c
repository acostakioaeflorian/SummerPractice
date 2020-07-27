#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  n 1024

int main()
{
    FILE *file;
    FILE *doc;

    int i,j,k = 0;

    file = fopen ("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab13\\zadacha21_b\\First_file.txt","r");
    doc  = fopen ("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab13\\zadacha21_b\\Second_file.txt","w");
    
    char txt[60],doubled[60],single[60],fin[60];
    
    while (fgets(txt,60,file))
    {
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
    }

    fprintf (doc,"Words with doubled letters:   ");
    for ( i = 0; i < k; i++)
    {
        fprintf (doc,"%c",doubled[i]);
    }

    fclose(file);
    fclose(doc);
 //===========================================================================================

    file = fopen ("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab13\\zadacha21_b\\First_file.txt","r");
    doc  = fopen ("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab13\\zadacha21_b\\Second_file.txt","a");

    k = 0;
    int count = 0;
    while (fgets(single,60,file))
    {
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
  	}
          
    fprintf (doc,"\nWords with single letters:   ");
        for ( i = 0; i < k; i++)
            {
                fprintf (doc,"%c",fin[i]);
            }

    fclose(file);
    fclose(doc);

    printf ("\n");
    system ("pause");
    return 0;
}

    