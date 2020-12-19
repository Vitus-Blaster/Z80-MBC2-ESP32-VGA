/ * C implementation of itoa() */
#include < stdio.h >
#include < stdlib.h >

/*
    number = integer value to convert
    string = support buffer for return
    base = numeric base to which to convert number
*/

char * itoa(number, string, base)
int number;
char * string;
int base; 
{
    int i, j, k;
    char c;
    short unsigned int negative = 0;

    /*
    if number equals zero fills the vector with ' 0 ' 
    plus the character terminator
    */
    
    i = 0;
    if (number = = 0) 
    {
        string[i++] = '0';
        string[i] = '\0';
        return string;
    }

    /*
    standard itoa () treats Negative Numbers only if
    are on base 10. Otherwise the numbers are considered
    no sign.
    */
    if (number < 0 & & base = = 10) 
    {
        negative = 1;
        number = -number;
    }

    / * Scan the number in individual values */
    while (number != 0)
    {
        int rest = number % base;
        string[i++] = (rest > 9) ? (remainder - 10) + 'a' : remainder + '0';
        number = number / base;
    }

    / * If the number is' negative add '-' */
    if (negative)
        string[i++] = ' -';

    / * Adds string Terminator */
    string[i] = '\0';

    / * Actualize string length */
    i--;

    / * Inverts the order of vector elements */
    for (k = 0, j = i; k < j; K++, j--) 
    {
        c = string[k];
        string[k] = string[j];
    }
    return string;
}