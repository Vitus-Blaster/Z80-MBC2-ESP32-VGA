/* gfillrec.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gfillrect(x1, y1, x2, y2)
int x1,y1, x2, y2;
{
      printf("%c_GFILLRECT%u;%u;%u;%u$",27,x1,y1,x2,y2);
}
