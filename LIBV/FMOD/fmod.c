#include <math.h>
#include "float.h"

double
fmod(x, y)
double x, y;
{
    double mod;

    if (y == 0.0)                     /* se il divisore e' zero       */
    {
        return Infinity;              /* vedi float.h                 */
    }

    if (x == 0.0)                     /* se il dividendo e' zero      */
    {
        return 0.0;                   /* torna zero                   */
    }

    if (x < 0.0)                      /* se il dividendo e' negativo  */
    {                                 /* il valore iniziale del
        mod = -x;                     /* modulo e' uguale al dividendo*/
    }                                 /* reso positivo                */
    else                              /* altrimenti                   */
    {                                 /* il valore iniziale del modulo*/
        mod = x;                      /* e' uguale al dividendo       */
    }

    if (y < 0.0)                      /* se il divisore e' negativo   */
    {
        y = -y;                       /* diventa positivo             */
    }

    while(mod >= y)                   /* ciclo di sottrazione del     */
    {                                 /* divisore dal dividendo,      */
        mod = mod-y;                  /* in uscita avremo un valore   */
    }                                 /* inferiore al dividendo       */

    if (x < 0.0)                      /* se il dividendo e' negativo  */
    {
        return -mod;                  /* il modulo e' negativo        */
    }

    return mod;                       /* restituisce il modulo        */
}
