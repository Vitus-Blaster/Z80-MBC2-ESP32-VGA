/* gpoint.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gpixel(x, y, r, g, b)
int x,y,r,g,b;
{
      printf("%c_GPEN%u;%u;%u$",27,r,g,b);
      printf("%c_GPIXEL%u;%u$",27,x,y);
}
