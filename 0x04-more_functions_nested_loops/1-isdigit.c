#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: The number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */
 
int _isdigit(int c) 
{
    if (c >= '0' && c <= '9') 
    {
        return 1; // c is a digit
    } else 
    {
        return 0; // c is not a digit
    }
}

