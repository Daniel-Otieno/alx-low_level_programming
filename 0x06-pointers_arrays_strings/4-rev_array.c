#include "main.h"
/**
*reverse_array - This is the main function for reversing arrays
*@a: This is the pointer the array
*@n: This is the number of elements in tha array;
*Return: void
*/
void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];

a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
