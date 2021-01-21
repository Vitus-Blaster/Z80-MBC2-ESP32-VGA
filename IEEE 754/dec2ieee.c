#include <stdio.h>
#include <libv.h>

typedef union
{
    float f;
    struct
    {
        unsigned int mantissa0:8 ;
        unsigned int mantissa1:8 ;
        unsigned int mantissa2:8 ;
        unsigned int exponent: 7;
        unsigned int sign: 1;
    } raw;
} myfloat;

void printBinary(unsigned int n, int i)
{
    int k;
    for (k = i - 1; k >= 0; k--)
    {
        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
}

void printIEEE(myfloat var)
{
    printf("%d | ", var.raw.sign);
    printBinary(var.raw.exponent, 7);
    printf(" |");
    printBinary(var.raw.mantissa2, 8);
    printf("|");
    printBinary(var.raw.mantissa1, 8);
    printf("|");
    printBinary(var.raw.mantissa0, 8);
    printf("|\n");
}

int main()
{
    int vett[24];
    int j, k, num;
    float numero;
    myfloat var;

    printf("Numero reale :");
    scanf("%f", &var.f);

    printf("Rappresentazione IEEE P754 modificata Hi-tech di %f : \n",
           var.f);
    printf("S |7 bit esp|  24 bit mantissa         |\n");
    printIEEE(var);
    printf("\n");

    printf("Forma esadecimale: ");
    j = var.raw.sign*128+var.raw.exponent;
    printf("%02x ",j);
    printf("%02x ",var.raw.mantissa2);
    printf("%02x ",var.raw.mantissa1);
    printf("%02x ",var.raw.mantissa0);
    printf("\n");

    num = var.raw.mantissa2;
    for (k = 7; k >= 0; k--)
    {
        if ((num >> k) & 1)
            vett[k+16]=1;
        else
            vett[k+16]=0;
    }

    num = var.raw.mantissa1;
    for (k = 7; k >= 0; k--)
    {
        if ((num >> k) & 1)
            vett[k+8]=1;
        else
            vett[k+8]=0;
    }

    num = var.raw.mantissa0;
    for (k = 7; k >= 0; k--)
    {
        if ((num >> k) & 1)
            vett[k]=1;
        else
            vett[k]=0;
    }
    printf("\n");

    numero = 0;
    j=0;
    for (k = 23; k >= 0; k--)
    {
        numero = numero + vett[k]*1.0/power(2,j);
        j++;
    }

    printf("Forma esponente 2: ");

    if (var.raw.sign==1)
        printf("-");

    printf("%1.7f ",numero);

    printf("2^%d \n",var.raw.exponent-65);

    return 0;
}
