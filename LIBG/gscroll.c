/* gscroll.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gscroll(x, y)
int x,y;
{
      printf("%c_GSCROLL%u;%u$",27,x,y);
}
