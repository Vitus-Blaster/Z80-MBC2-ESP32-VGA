/* grect.c */
#include <stdio.h>
#include <stdlib.h>
 
void
grect(x1, y1, x2, y2)
int x1, y1, x2, y2;
{
      printf("%c_GRECT%u;%u;%u;%u$",27,x1,y1,x2,y2);
}
