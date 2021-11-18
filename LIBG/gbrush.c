/* gbrush.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gbrush(r, g, b)
int r,g,b;
{
      printf("%c_GBRUSH%u;%u;%u$",27,r,g,b);
}
