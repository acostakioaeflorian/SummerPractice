#include <stdio.h>
#include <stdlib.h>

    typedef struct 
	{
		char name[20];
		char genre[20];
		int hour,min,min_end,hour_end;
	} 
	program;
 
	void vyvod(program dis)       
		{
			printf ("Name: %s   \n",dis.name);
			printf ("Genre: %s \n",dis.genre);
			printf ("Begin at  %.2d:%.2d  \n",dis.hour,dis.min);
			printf ("End   at  %.2d:%.2d  \n",dis.hour_end,dis.min_end);
			printf ("\n");
		}
		
int main(int argc, char *argv[]) 
{
	int n,i;
	printf ("Vvedity kilkisty program ");
	scanf  ("%d",&n);
	
	printf ("\n");
	
	program *dis;
	dis = (program *) calloc (n,sizeof(program));
	
	for (i=0;i<n;i++)
		{
			printf ("Vvedity nazvu programy: ");
			fflush (stdin);
			gets(dis[i].name);
			
			printf ("Vvedity janr programy: ");
			fflush (stdin);
			gets(dis[i].genre);
			
			printf ("Vvedity na yaku godynu pocinaetsya: ");
			fflush (stdin);
			scanf ("%d",&dis[i].hour);
			
			printf ("Vvedity hvilyni koli pocinaetsya: ");
			fflush (stdin);
			scanf ("%d",&dis[i].min);
			
			printf ("Vvedity na yaku godynu zakinciuetsya: ");
			fflush (stdin);
			scanf ("%d",&dis[i].hour_end);
			
			printf ("Vvedity hvilyni koli zakinciuetsya: ");
			fflush (stdin);
			scanf ("%d",&dis[i].min_end);
			
			printf ("\n");
		}
	
	int x1,x2,count = 0; 
	printf ("Vvedity godyny pochatku ");
	scanf ("%d",&x1);

    printf ("Vvedity godyny kinets ");
	scanf ("%d",&x2);

	for (i=0;i<n;i++)
		{
			if ((x1>dis[i].hour) || (x2<dis[i].hour_end))
				{
                    if (strcmp(dis[i].genre,"artistic")==0)
                        {
                            vyvod(dis[i]);
                            count++;
                        }
				}
		}
    
    printf ("\n\n  Kilkisty program = %d\n\n",count);
	system("pause");
	return 0;
}
