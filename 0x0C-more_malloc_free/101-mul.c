#include <main.h>
#include <stdio.h>
#include <stdlib.h>

int multiplyNumbers(int num1, int num2)
{
return (num1 * num2);
}

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

char *num1Str = argv[1];
char *num2Str = argv[2];

if (!isNumeric(num1Str) || !isNumeric(num2Str))
{
printf("Error\n");
return (98);
}

int num1 = atoi(num1Str);
int num2 = atoi(num2Str);

int result = multiplyNumbers(num1, num2);

printf("%d\n", result);

return (0);
}

