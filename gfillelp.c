/* gfillelp.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gfillelp(x1, y1, w, h)
int x1,y1,w,h;
{
      printf("%c_GFILLELLIPSE%u;%u;%u;%u$",27,x1,y1,w,h);
}
