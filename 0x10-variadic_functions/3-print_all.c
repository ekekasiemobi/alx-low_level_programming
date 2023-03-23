#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char* const format, ...)
{
    va_list args;
    va_start(args, format);
    const char *ptr = format;
   
     ptr = format;
    
    while (*ptr != '\0')
    {
        if (*ptr == 'c')
	{
           char c = va_arg(args, int);
             printf("%s%c", c);
        }
        else if (*ptr == 'i')
	{
            int i = va_arg(args, int);
            printf("%s%d", i);
        }
        else if (*ptr == 'f')
	{
           double f = va_arg(args, double);
            printf("%s%f", f);
        }
        else if (*ptr == 's')
	{
           char *s = va_arg(args, char*);
            if (s == NULL) {
                printf("(nil)");
            } 
	    else 
	    {
                printf("%s", s);
            }
        }

        ptr++;
    }
    
    printf("\n");
    va_end(args);
}

