#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
	{
		char name[20];	
		int mas;
		int volume;
	}   data;

    void vyvod(data output)       
		{
			printf ("Name:    %s    \n",output.name);
			printf ("Mass:    %d    \n",output.mas);
			printf ("Volume:  %d    \n",output.volume);
		}
    
    float density(data dens)
    {       
        float densit;
        densit = (float)dens.mas/dens.volume;

        return densit;
    }

int main() 
{
	int i,max = 0;

	data *info;
	info = (data *) calloc (30,sizeof(data));
	
    strcpy(info[0].name,"Derevo");         info[0].mas = 43;      info[0].volume =  93;
	strcpy(info[1].name,"Metal");          info[1].mas = 86;      info[1].volume =  87;
    strcpy(info[2].name,"Aluminium");      info[2].mas = 26;      info[2].volume =  16;
    strcpy(info[3].name,"Kvarts");         info[3].mas = 45;      info[3].volume =  37;
    strcpy(info[4].name,"Voda");           info[4].mas = 16;      info[4].volume =  25;
    strcpy(info[5].name,"Iridiy");         info[5].mas = 92;      info[5].volume =  99;
    strcpy(info[6].name,"Osmiy");          info[6].mas = 28;      info[6].volume =  98;
    strcpy(info[7].name,"Platina");        info[7].mas = 47;      info[7].volume =  71;
    strcpy(info[8].name,"Svinets");        info[8].mas = 62;      info[8].volume =  85;
    strcpy(info[9].name,"Serebro");        info[9].mas = 50;      info[9].volume =  68;
    strcpy(info[10].name,"Medy");          info[10].mas = 12;     info[10].volume = 58;
    strcpy(info[11].name,"Latuny");        info[11].mas = 32;     info[11].volume = 37;
    strcpy(info[12].name,"Jelezo");        info[12].mas = 34;     info[12].volume = 12;
    strcpy(info[13].name,"Chugun");        info[13].mas = 12;     info[13].volume = 91;
    strcpy(info[14].name,"Olovo");         info[14].mas = 78;     info[14].volume = 57;
    strcpy(info[15].name,"Tsink");         info[15].mas = 64;     info[15].volume = 68;
    strcpy(info[16].name,"Spirt");         info[16].mas = 94;     info[16].volume = 18;
    strcpy(info[17].name,"Kerosin");       info[17].mas = 24;     info[17].volume = 17;
    strcpy(info[18].name,"Zoloto");        info[18].mas = 43;     info[18].volume = 76;
    strcpy(info[19].name,"Efir");          info[19].mas = 54;     info[19].volume = 25;
    strcpy(info[20].name,"Rtuty");         info[20].mas = 68;     info[20].volume = 41;
    strcpy(info[21].name,"Ice");           info[21].mas = 69;     info[21].volume = 51;
    strcpy(info[22].name,"Milk");          info[22].mas = 10;     info[22].volume = 55;
    strcpy(info[23].name,"Farfor");        info[23].mas = 25;     info[23].volume = 40;
    strcpy(info[24].name,"Beton");         info[24].mas = 38;     info[24].volume = 82;
    strcpy(info[25].name,"Karbon");        info[25].mas = 18;     info[25].volume = 23;
    strcpy(info[26].name,"Kapron");        info[26].mas = 64;     info[26].volume = 45;
    strcpy(info[27].name,"Brick");         info[27].mas = 43;     info[27].volume = 55;
    strcpy(info[28].name,"Azot");          info[28].mas = 99;     info[28].volume = 75;
    strcpy(info[29].name,"Med");           info[29].mas = 93;     info[29].volume = 31;

    for (i=0;i<30;i++)
		{
            vyvod(info[i]);
            printf ("Density: ");
            printf ("%.2f",density(info[i]));
            if (density(info[i]) > max)
            {
                max = i;
            }
            
            printf ("\n\n");		
		}
    printf ("------------------------\n");
    printf ("Max density of material \n");
    vyvod(info[max]);
    printf ("Density: ");
    printf ("%.2f",density(info[max]));

    int  max_2 = 0,point = 0,max_volume = 0,max_id = 0;
    float min_1 = 100;
    for ( i = 0; i < 30; i++)
    {
        if ((info[i].volume>max_2) && (density(info[i])<min_1))
        {
            max_2 = info[i].volume;
            min_1 = density(info[i]);
            point = i;
        }    

        if ((info[i].volume>max_volume))
        {
            max_volume = info[i].volume;
            max_id = i;
        }
        
    }
    
    printf ("\n------------------------\n");
    printf ("Min density and Max volume of material \n");
    vyvod(info[point]);
    printf ("Density: ");
    printf ("%.2f",density(info[point]));


    printf ("\n------------------------\n");
    printf ("Max volume of material \n");
    vyvod(info[max_id]);
    printf ("Density: ");
    printf ("%.2f",density(info[max_id]));

    printf ("\n\n\n");
	system("pause");
	return 0;
}
