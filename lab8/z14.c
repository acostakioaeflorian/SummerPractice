#include <stdlib.h>
#include <stdio.h>

  area (int a,int b)
  {
      int s;
      s = abs(a*b);
      return s;
  }

  perimetr (int a,int b)
  {
      int p;
      p = (abs(a*2))+(abs(b*2));
  }

int main() 
{
  int xa = 0, ya = 0;  // A
  int xc,yc; // C

  printf("Input point C \n");          // x - 5 , y - 4
  printf ("X = ");
  scanf("%d",&xc);
  printf ("Y = ");
  scanf("%d",&yc);

 // якщо А знаходиться в (0;0)
  printf ("Area = %d\n",area(xc,yc));            
  printf ("Perimetr = %d",perimetr(xc,yc));

  printf ("\n");
  system ("pause");
  return 0;
}
