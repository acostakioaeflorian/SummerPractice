#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  n 1024

int main()
{
    FILE *file;
    FILE *doc;

    char str[n],ma[60];
    int i,count = 0,max = 0;

    file = fopen ("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab14\\z23\\First_file.txt","w");
    printf ("\n\n___________________Input text:___________________\n\n");
    fflush(stdin);
    fgets(str,n,stdin);

    int x = strlen (str);

    for ( i = 0; i < x; i++)
        {   
            if (str[i] == ' ')
                {
                    count++;        
                }
        
            fprintf (file,"%c",str[i]);

            if (count == 4)
                {
                    fprintf (file,"\n");
                    count = 0;
                }  
    }
    fclose(file);
    printf ("\n_____________Text has been downloaded:_____________\n");

    
    file = fopen ("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab14\\z23\\First_file.txt","r");
    doc  = fopen ("C:\\Users\\Nelik\\Desktop\\Laboratorki\\practica\\lab14\\z23\\Second_file.txt","w");
    
    while (fgets(str,1024,file))
        {   
            x = strlen(str);
            for ( i = 0; i < x; i++)
                {   
                    fprintf (doc,"%c",str[i]);
                }     
        }  

    int a = 1;
    rewind(file);
    while (fgets(str,1024,file))
        {   
            count = 0;
            char *tok=strtok (str," ,.");   
            while (tok!=NULL)
  		        {
                    count++;
      		        if (strlen(tok)>max)
      			        {
      				        max=strlen(tok);
    				        strcpy(ma,tok);
				        }    

                      if (count == 4)
                            {   
                                fprintf (doc,"%s - slovo yake skladayetsya z naybilishogo kolicestva simvolov [%d] ryadok\n",ma,a);
                                max = 0;
                                count = 0;
                                a++;
                            }  
                    tok=strtok(NULL," ,.");
  		        }   
        }        

    if ((count>0) && (count<4))
    {
        fprintf (doc,"%s - slovo yake skladayetsya z naybilishogo kolicestva simvolov [%d] ryadok\n",ma,a);
    }

    fclose(file);
    fclose(doc);

    printf ("\n");
    system ("pause");
    return 0;
}
