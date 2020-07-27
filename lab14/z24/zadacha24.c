#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  n 1024

int main()
{
    char str[n],ma[30];
    int i,j,k = 0,count = 0;
    char txt[60],doubled[60];

    printf ("\n\n___________________Input text:___________________\n\n");
    fflush(stdin);
    fgets(str,n,stdin);
    printf ("\n\n___________________Text has been downloaded:___________________\n\n");
    int x = strlen (str);

    for ( i = 0; i < x; i++)
        {   
            if (str[i] == ' ')
                {
                    count++;        
                }
        
            printf ("%c",str[i]);

            if (count == 4)
                {
                    printf ("\n");
                    count = 0;
                }  
        }
    printf ("\n\n");
    int a = 1;

    char *tok=strtok (str," ");
  	count = 0; 
    while (tok!=NULL)
        {
            count++;
	        for ( i = 0; i < strlen(tok); i++)
            {
                if ((tok[i] == '0') || (tok[i] == '1') || (tok[i] == '2') || (tok[i] == '3') || (tok[i] == '4') || (tok[i] == '5') || (tok[i] == '6') || (tok[i] == '7') || (tok[i] == '8') || (tok[i] == '9') || (tok[i] == '=') || (tok[i] == '<') || (tok[i] == '>'))
		            {
			            strcpy(ma,tok);
		            }    
            }
            if (ma[0]!='\0')
                printf ("%s - slovo v [%d] ryadku\n",ma,a);

            if (count == 4)
                {   
                    count = 0;
                    a++;
                }  
            ma[0]='\0';
            tok=strtok(NULL," ,.");
        }
    
    printf ("\n");
    system ("pause");
    return 0;
}


            