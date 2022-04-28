#include "main.h"
/**
*_strncat - This is the main function for concatenates two strings
*@dest: This is the destination of the string
*@src: This is the source of the string
*@n: This is number of bytes.
*Return: this is pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
