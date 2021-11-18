/* gpen.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gpen(r, g, b)
int r,g,b;
{
      printf("%c_GPEN%u;%u;%u$",27,r,g,b);
}
