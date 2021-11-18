/* gpixel.c */
#include <stdio.h>
#include <stdlib.h>
 
void
gpixel(x, y)
int x,y;
{
      printf("%c_GPIXEL%u;%u$",27,x,y);
}
