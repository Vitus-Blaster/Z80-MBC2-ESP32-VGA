/* gline.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gline(x1, y1, x2, y2, r, g, b)
int x1,y1,x2,y2,r,g,b;
{
      printf("%c_GPEN%u;%u;%u$",27,r,g,b);
      printf("%c_GLINE%u;%u;%u;%u$",27,x1,y1,x2,y2);
}
