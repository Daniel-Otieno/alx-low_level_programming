#include "main.h"
/**
*_strncpy - This is the funstion for copying files
*@dest: This is the pointer destination
*@src: This is the pointer source
*@n: thid the number of bytes
*Return: pointer to the destination
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
