#include "include/main.h"

/**
 * main - check the code for uppercase character
 *
 * Retiurn: Always 0
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
