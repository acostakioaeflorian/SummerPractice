#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
	char s[100];
	int i,j,k=0,g=0,n;
	
	printf ("vvedity txt\n ");
	gets (s);
	n = strlen(s);
	
	for (i = 0; i < n; i++)
		{
			if (s[i]==' ')
			    {
			        k++;
			    }
			
			if ((s[i]=='1') || 
			    (s[i]=='2') ||
			    (s[i]=='3') ||
			    (s[i]=='4') ||
			    (s[i]=='5') ||
			    (s[i]=='6') ||
			    (s[i]=='7') ||
			    (s[i]=='8') ||
			    (s[i]=='9') ||
			    (s[i]=='0'))
			{
				g++;
			}
		}
		
	printf ("kolichestvo probelov  %d \n",k);
	printf ("kolichestvo tsifr  %d \n",g);		
    system ("pause");
	return 0;
}
