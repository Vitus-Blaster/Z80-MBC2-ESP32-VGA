/* gellipse.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gellipse(x1, y1, w, h)
int x1,y1,w, h;
{
      printf("%c_GELLIPSE%u;%u;%u;%u$",27,x1,y1,w,h);
}
