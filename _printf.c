#include "main.h"
#include <stdarg.h>

/**
 * _printf - a function that prints anything
 * @format: identifier to look for
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
    int i = 0;
    int printed = 0;

    while (format[i])
    {
        _putchar(format[i]);
        printed++;
        i++;
    }

    return (printed);
}
