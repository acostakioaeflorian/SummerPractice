#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
	{
		char sur_name[20];	
		char adress[20];
		char number[20];
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
			printf ("Number:  %s    \n",dis.number);
			printf ("\n");
		}

    int checking(link dis)
        {
            if (dis.number[8]=='5')
            {
                return 5;
            }
        return 0;
        }

int main() 
{
	int i;
	
	link *info;
	info = (link *) calloc (25,sizeof(link));
	
    strcpy(info[0].sur_name,"Akostakioae");    strcpy(info[0].adress,"Aalo");       strcpy(info[0].number,"(80372)-53-29-34");
	strcpy(info[1].sur_name,"Kravtsov");       strcpy(info[1].adress,"Ave");        strcpy(info[1].number,"(80372)-21-98-57");
    strcpy(info[2].sur_name,"Lichman");        strcpy(info[2].adress,"Ramoa");      strcpy(info[2].number,"(80372)-91-25-67");
    strcpy(info[3].sur_name,"Lobach");         strcpy(info[3].adress,"Ulyte");      strcpy(info[3].number,"(80372)-79-83-17");
    strcpy(info[4].sur_name,"Lyashenko");      strcpy(info[4].adress,"Joas");       strcpy(info[4].number,"(80372)-91-72-55");
    strcpy(info[5].sur_name,"Mendrishora");    strcpy(info[5].adress,"Pyves");      strcpy(info[5].number,"(80372)-27-51-95");
    strcpy(info[6].sur_name,"Mighidin");       strcpy(info[6].adress,"Cyler");      strcpy(info[6].number,"(80372)-26-38-98");
    strcpy(info[7].sur_name,"Naghirniak");     strcpy(info[7].adress,"Bery");       strcpy(info[7].number,"(80372)-48-27-10");
    strcpy(info[8].sur_name,"Parashuk");       strcpy(info[8].adress,"Otres");      strcpy(info[8].number,"(80372)-73-28-58");
    strcpy(info[9].sur_name,"Paskar");         strcpy(info[9].adress,"Qoire");      strcpy(info[9].number,"(80372)-62-10-81");
    strcpy(info[10].sur_name,"Plotnikova");    strcpy(info[10].adress,"Depes");     strcpy(info[10].number,"(80372)-41-77-58");
    strcpy(info[11].sur_name,"Prannichuk");    strcpy(info[11].adress,"Xyos");      strcpy(info[11].number,"(80372)-59-73-57");
    strcpy(info[12].sur_name,"Rushak");        strcpy(info[12].adress,"Hyasy");     strcpy(info[12].number,"(80372)-91-21-28");
    strcpy(info[13].sur_name,"Savina");        strcpy(info[13].adress,"Pater");     strcpy(info[13].number,"(80372)-32-89-14");
    strcpy(info[14].sur_name,"Serbinchuk");    strcpy(info[14].adress,"Nialot");    strcpy(info[14].number,"(80372)-82-19-57");
    strcpy(info[15].sur_name,"Skalovskiy");    strcpy(info[15].adress,"Gerys");     strcpy(info[15].number,"(80372)-72-16-58");
    strcpy(info[16].sur_name,"Soboly");        strcpy(info[16].adress,"Luiva");     strcpy(info[16].number,"(80372)-69-21-84");
    strcpy(info[17].sur_name,"Stanislavskiy"); strcpy(info[17].adress,"Rebory");    strcpy(info[17].number,"(80372)-49-81-17");
    strcpy(info[18].sur_name,"Tkachuk");       strcpy(info[18].adress,"Menesya");   strcpy(info[18].number,"(80372)-52-91-76");
    strcpy(info[19].sur_name,"Toporovska");    strcpy(info[19].adress,"Foped");     strcpy(info[19].number,"(80372)-32-79-15");
    strcpy(info[20].sur_name,"Tsikal");        strcpy(info[20].adress,"Wetris");    strcpy(info[20].number,"(80372)-21-25-61");
    strcpy(info[21].sur_name,"Tsurkan");       strcpy(info[21].adress,"Jehyg");     strcpy(info[21].number,"(80372)-11-27-51");
    strcpy(info[22].sur_name,"Cherney");       strcpy(info[22].adress,"Iolysh");    strcpy(info[22].number,"(80372)-81-75-75");
    strcpy(info[23].sur_name,"Shevchenko");    strcpy(info[23].adress,"Cerys");     strcpy(info[23].number,"(80372)-52-64-01");
    strcpy(info[24].sur_name,"Shtefiuk");      strcpy(info[24].adress,"Layve");     strcpy(info[24].number,"(80372)-91-29-75");

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
            if (checking(info[i])==5)
				{
					vyvod(info[i]);
			    }	
        }
	
    printf ("\n");
	system("pause");
	return 0;
}
