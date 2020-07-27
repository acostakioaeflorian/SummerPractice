#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
	{
		char sur_name[20];	
		char adress[20];
		int number;
	} link;

	 int namecmp(const void* a, const void* b)
        {
            link *pa = a;
            link *pb = b;
            return strcmp(pa->adress, pb->adress);
        }

    void vyvod(link dis)       
		{
			printf ("Surname: %s    \n",dis.sur_name);
			printf ("Adress:  %s    \n",dis.adress);
			printf ("Number:  %d    \n",dis.number);
			printf ("\n");
		}

int main() 
{
	int i;
	
	link *info;
	info = (link *) calloc (25,sizeof(link));
	
    strcpy(info[0].sur_name,"Akostakioae");    strcpy(info[0].adress,"Aalo");       info[0].number =  532934;
	strcpy(info[1].sur_name,"Kravtsov");       strcpy(info[1].adress,"Ave");        info[1].number =  219857;
    strcpy(info[2].sur_name,"Lichman");        strcpy(info[2].adress,"Ramoa");      info[2].number =  912567;
    strcpy(info[3].sur_name,"Lobach");         strcpy(info[3].adress,"Ulyte");      info[3].number =  798317;
    strcpy(info[4].sur_name,"Lyashenko");      strcpy(info[4].adress,"Joas");       info[4].number =  917255;
    strcpy(info[5].sur_name,"Mendrishora");    strcpy(info[5].adress,"Pyves");      info[5].number =  275195;
    strcpy(info[6].sur_name,"Mighidin");       strcpy(info[6].adress,"Cyler");      info[6].number =  263898;
    strcpy(info[7].sur_name,"Naghirniak");     strcpy(info[7].adress,"Bery");       info[7].number =  482710;
    strcpy(info[8].sur_name,"Parashuk");       strcpy(info[8].adress,"Otres");      info[8].number =  732858;
    strcpy(info[9].sur_name,"Paskar");         strcpy(info[9].adress,"Qoire");      info[9].number =  621081;
    strcpy(info[10].sur_name,"Plotnikova");    strcpy(info[10].adress,"Depes");     info[10].number = 417758;
    strcpy(info[11].sur_name,"Prannichuk");    strcpy(info[11].adress,"Xyos");      info[11].number = 597357;
    strcpy(info[12].sur_name,"Rushak");        strcpy(info[12].adress,"Hyasy");     info[12].number = 912128;
    strcpy(info[13].sur_name,"Savina");        strcpy(info[13].adress,"Pater");     info[13].number = 328914;
    strcpy(info[14].sur_name,"Serbinchuk");    strcpy(info[14].adress,"Nialot");    info[14].number = 821957;
    strcpy(info[15].sur_name,"Skalovskiy");    strcpy(info[15].adress,"Gerys");     info[15].number = 721658;
    strcpy(info[16].sur_name,"Soboly");        strcpy(info[16].adress,"Luiva");     info[16].number = 692184;
    strcpy(info[17].sur_name,"Stanislavskiy"); strcpy(info[17].adress,"Rebory");    info[17].number = 498117;
    strcpy(info[18].sur_name,"Tkachuk");       strcpy(info[18].adress,"Menesya");   info[18].number = 529176;
    strcpy(info[19].sur_name,"Toporovska");    strcpy(info[19].adress,"Foped");     info[19].number = 327915;
    strcpy(info[20].sur_name,"Tsikal");        strcpy(info[20].adress,"Wetris");    info[20].number = 212561;
    strcpy(info[21].sur_name,"Tsurkan");       strcpy(info[21].adress,"Jehyg");     info[21].number = 112751;
    strcpy(info[22].sur_name,"Cherney");       strcpy(info[22].adress,"Iolysh");    info[22].number = 817575;
    strcpy(info[23].sur_name,"Shevchenko");    strcpy(info[23].adress,"Cerys");     info[23].number = 526401;
    strcpy(info[24].sur_name,"Shtefiuk");      strcpy(info[24].adress,"Layve");     info[24].number = 912975;

    for (i=0;i<25;i++)
		{
	    	printf ("  [%d]\n",i+1);
            vyvod(info[i]);		
		}

printf ("_____________________________\n");
printf ("=============================\n\n");

    qsort(info, 25, sizeof(link), namecmp);
    for(i = 0 ; i < 25 ; i++)
        {
            if ((info[i].number>=500000) && (info[i].number<600000))
				{
					vyvod(info[i]);
				}	
        }
	
    printf ("\n");
	system("pause");
	return 0;
}
