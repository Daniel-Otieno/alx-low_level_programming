#include <stdio.h>
#include <stdarg.h>
#include "function_pointers.h"

#ifndef VAR_FUNCS_H
#define VAR_FUNCS_C

/**
* print_name- this functions prints a name
* a blank line
*@name: string to print.
*@f: this a function pointer, that recieves a string.
* Description: this function prints a name)?
* section header: the header of this function is function_pointers.h)*
* Return: this is a void function no return
*/
#ifndef VAR_FUNCS_H
#define VAR_FUNCS_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_FUNCS_H */
