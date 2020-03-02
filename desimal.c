#include <stdio.h>

int main ()
{
    int decimal = 12;
    int binary;

    while (decimal>0)
    {
        binary = decimal%2;
        printf ("%d ",binary);
        decimal = decimal/2;
        }
        return 0;
        }
